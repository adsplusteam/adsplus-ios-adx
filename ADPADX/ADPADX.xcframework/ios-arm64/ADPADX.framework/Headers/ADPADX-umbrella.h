#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ADPADX.h"
#import "ADPADXConfig.h"
#import "ADPADXError.h"
#import "ADPADXSDK.h"
#import "ADPADXSplashAd.h"
#import "ADPADXSplashAdDelegate.h"

FOUNDATION_EXPORT double ADPADXVersionNumber;
FOUNDATION_EXPORT const unsigned char ADPADXVersionString[];

