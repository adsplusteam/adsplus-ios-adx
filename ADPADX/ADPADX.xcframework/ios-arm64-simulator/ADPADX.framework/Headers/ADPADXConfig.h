#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ADPADXSplashDisplayMode) {
    ADPADXSplashDisplayModeSDKView = 0,
    ADPADXSplashDisplayModeCustomView = 1,
};

@interface ADPADXConfig : NSObject <NSCopying>

@property (nonatomic, copy, readonly) NSString *appId;
@property (nonatomic, copy, readonly) NSString *appKey;
@property (nonatomic, assign, readonly) BOOL debug;
@property (nonatomic, assign, readonly) ADPADXSplashDisplayMode splashDisplayMode;

@property (nonatomic, copy, readonly) NSString *ossEndpoint;
@property (nonatomic, copy, readonly) NSString *ossBucketName;
@property (nonatomic, copy, readonly) NSString *ossConfigPrefix;

@property (nonatomic, copy, readonly) NSString *slsEndpoint;
@property (nonatomic, copy, readonly) NSString *slsProject;
@property (nonatomic, copy, readonly) NSString *slsLogStore;
@property (nonatomic, copy, readonly) NSString *slsAccessKeyId;
@property (nonatomic, copy, readonly) NSString *slsAccessKeySecret;
@property (nonatomic, copy, nullable, readonly) NSString *slsSecurityToken;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithAppId:(NSString *)appId appKey:(NSString *)appKey NS_DESIGNATED_INITIALIZER;

- (ADPADXConfig *)configBySettingDebug:(BOOL)debug;
- (ADPADXConfig *)configBySettingSplashDisplayMode:(ADPADXSplashDisplayMode)displayMode;
- (ADPADXConfig *)configBySettingOssEndpoint:(NSString *)endpoint bucketName:(NSString *)bucketName;
- (ADPADXConfig *)configBySettingOssConfigPrefix:(NSString *)configPrefix;
- (ADPADXConfig *)configBySettingSlsProject:(NSString *)project
                                   logStore:(NSString *)logStore
                                accessKeyId:(NSString *)accessKeyId
                            accessKeySecret:(NSString *)accessKeySecret
                              securityToken:(nullable NSString *)securityToken;

@end

NS_ASSUME_NONNULL_END
