//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, OrchSimpleFormValue;

@interface OrchRedirectFormValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int URLOneOfCase; // @dynamic URLOneOfCase;
@property(retain, nonatomic) OrchSimpleFormValue *additionalFormValue; // @dynamic additionalFormValue;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(nonatomic) _Bool flowAborted; // @dynamic flowAborted;
@property(nonatomic) _Bool flowIncomplete; // @dynamic flowIncomplete;
@property(nonatomic) _Bool hasAdditionalFormValue; // @dynamic hasAdditionalFormValue;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasFlowAborted; // @dynamic hasFlowAborted;
@property(nonatomic) _Bool hasFlowIncomplete; // @dynamic hasFlowIncomplete;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasInterceptedPostBody; // @dynamic hasInterceptedPostBody;
@property(nonatomic) _Bool hasRedirectLandingMessage; // @dynamic hasRedirectLandingMessage;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *interceptedPostBody; // @dynamic interceptedPostBody;
@property(copy, nonatomic) NSString *nonTerminalURL; // @dynamic nonTerminalURL;
@property(copy, nonatomic) NSString *redirectLandingMessage; // @dynamic redirectLandingMessage;
@property(copy, nonatomic) NSString *terminalURL; // @dynamic terminalURL;

@end
