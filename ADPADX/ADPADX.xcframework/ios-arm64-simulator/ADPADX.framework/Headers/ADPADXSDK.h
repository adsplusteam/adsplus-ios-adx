#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ADPADX/ADPADXConfig.h>
#import <ADPADX/ADPADXSplashAdDelegate.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ADPADXInitCompletion)(BOOL success, NSError *_Nullable error);

@interface ADPADXSDK : NSObject

+ (void)initWithConfig:(ADPADXConfig *)config completion:(nullable ADPADXInitCompletion)completion;
+ (BOOL)isInitialized;
+ (void)setDebugLogEnabled:(BOOL)enabled;
+ (void)loadSplashAdWithRootViewController:(UIViewController *)rootViewController
                               placementId:(NSString *)placementId
                                   delegate:(nullable id<ADPADXSplashAdDelegate>)delegate;
+ (void)loadSplashAdWithRootViewController:(UIViewController *)rootViewController
                               placementId:(NSString *)placementId
                              initTimeoutMs:(NSTimeInterval)initTimeoutMs
                                   delegate:(nullable id<ADPADXSplashAdDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
