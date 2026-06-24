#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class ADPADXSplashAd;

@protocol ADPADXSplashAdDelegate <NSObject>

@optional
- (void)adpadx_splashAdDidLoad:(ADPADXSplashAd *)splashAd;
- (void)adpadx_splashAd:(nullable ADPADXSplashAd *)splashAd didFailWithError:(NSError *)error;
- (void)adpadx_splashAdDidShow:(ADPADXSplashAd *)splashAd;
- (void)adpadx_splashAdDidExpose:(ADPADXSplashAd *)splashAd;
- (void)adpadx_splashAdDidClick:(ADPADXSplashAd *)splashAd;
- (void)adpadx_splashAdDidClose:(ADPADXSplashAd *)splashAd;
- (void)adpadx_splashAdDidCountdownClose:(ADPADXSplashAd *)splashAd;

@end

NS_ASSUME_NONNULL_END
