#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSErrorDomain const ADPADXErrorDomain;

typedef NS_ERROR_ENUM(ADPADXErrorDomain, ADPADXErrorCode) {
    ADPADXErrorInitFailed = 1001,
    ADPADXErrorAppKeyEmpty = 1002,
    ADPADXErrorAppKeyNotFound = 1003,
    ADPADXErrorAppDisabled = 1004,
    ADPADXErrorAppIdEmpty = 1005,
    ADPADXErrorConfigDecryptFailed = 1006,
    ADPADXErrorConfigInvalid = 1007,
    ADPADXErrorPlacementIdEmpty = 1008,
    ADPADXErrorPlacementNotFound = 1009,
    ADPADXErrorPlacementDisabled = 1010,
    ADPADXErrorPlacementTypeMismatch = 1011,
    ADPADXErrorNoAd = 1012,
    ADPADXErrorCampaignRemainingNotEnough = 1013,
    ADPADXErrorPlacementRemainingNotEnough = 1014,
    ADPADXErrorMaterialUnavailable = 1015,
    ADPADXErrorPlacementConfigDownloadFailed = 1016,
    ADPADXErrorDailyLimitReached = 1017,
    ADPADXErrorCampaignDetailDownloadFailed = 1018,
    ADPADXErrorNotInitialized = 1101,
    ADPADXErrorRequestTooFrequent = 1103,
    ADPADXErrorShowFailed = 1201,
};

@interface ADPADXError : NSObject

+ (NSError *)errorWithCode:(ADPADXErrorCode)code;
+ (NSError *)errorWithCode:(ADPADXErrorCode)code message:(nullable NSString *)message;
+ (NSString *)messageForCode:(ADPADXErrorCode)code;

@end

NS_ASSUME_NONNULL_END
