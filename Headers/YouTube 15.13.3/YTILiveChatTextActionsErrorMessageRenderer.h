//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString, YTILiveChatRichMessageInput;

@interface YTILiveChatTextActionsErrorMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *clickToDismissText; // @dynamic clickToDismissText;
@property(retain, nonatomic) YTIFormattedString *editMessageText; // @dynamic editMessageText;
@property(retain, nonatomic) YTIFormattedString *errorText; // @dynamic errorText;
@property(nonatomic) _Bool hasClickToDismissText; // @dynamic hasClickToDismissText;
@property(nonatomic) _Bool hasEditMessageText; // @dynamic hasEditMessageText;
@property(nonatomic) _Bool hasErrorText; // @dynamic hasErrorText;
@property(copy, nonatomic) NSString *originalMessage; // @dynamic originalMessage;
@property(readonly, nonatomic) int originalOneOfCase; // @dynamic originalOneOfCase;
@property(retain, nonatomic) YTILiveChatRichMessageInput *originalRichMessage; // @dynamic originalRichMessage;

@end

