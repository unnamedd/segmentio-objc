#import <Foundation/Foundation.h>
#import "SEGAnalytics.h"

#if TARGET_OS_IOS
#import <StoreKit/StoreKit.h>
#endif

NS_ASSUME_NONNULL_BEGIN

#if TARGET_OS_IOS
@interface SEGStoreKitTracker : NSObject <SKPaymentTransactionObserver, SKProductsRequestDelegate>

+ (instancetype)trackTransactionsForAnalytics:(SEGAnalytics *)analytics;

@end
#endif

NS_ASSUME_NONNULL_END
