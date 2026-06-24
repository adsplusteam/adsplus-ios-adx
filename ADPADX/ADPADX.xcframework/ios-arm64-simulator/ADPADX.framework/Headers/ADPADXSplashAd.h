#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ADPADX/ADPADXSplashAdDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface ADPADXSplashAd : NSObject

@property (nonatomic, weak, nullable) id<ADPADXSplashAdDelegate> delegate;
@property (nonatomic, copy, readonly) NSString *placementId;
@property (nonatomic, copy, readonly) NSString *campaignId;
@property (nonatomic, copy, readonly) NSString *creativeId;
@property (nonatomic, copy, nullable, readonly) NSString *landingURLString;
@property (nonatomic, assign, readonly, getter=isValid) BOOL valid;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (void)showFromRootViewController:(UIViewController *)rootViewController;
- (void)showInContainerView:(UIView *)containerView;
- (void)reportShown;
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
