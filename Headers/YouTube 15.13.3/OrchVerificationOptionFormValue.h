//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface OrchVerificationOptionFormValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *formToken; // @dynamic formToken;
@property(nonatomic) _Bool hasFormToken; // @dynamic hasFormToken;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasVerificationOptionToken; // @dynamic hasVerificationOptionToken;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSData *verificationOptionToken; // @dynamic verificationOptionToken;

@end
