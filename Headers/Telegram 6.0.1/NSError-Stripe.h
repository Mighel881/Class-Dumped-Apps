//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (Stripe)
+ (id)stp_cardErrorProcessingErrorUserMessage;
+ (id)stp_unexpectedErrorMessage;
+ (id)stp_cardErrorDeclinedUserMessage;
+ (id)stp_cardErrorExpiredCardUserMessage;
+ (id)stp_cardErrorInvalidExpYearUserMessage;
+ (id)stp_cardErrorInvalidExpMonthUserMessage;
+ (id)stp_cardInvalidCVCUserMessage;
+ (id)stp_cardErrorInvalidNumberUserMessage;
+ (id)stp_genericFailedToParseResponseError;
+ (id)stp_errorFromStripeResponse:(id)arg1;
- (_Bool)stp_isURLSessionCancellationError;
- (_Bool)stp_isUnknownCheckoutError;
@end
