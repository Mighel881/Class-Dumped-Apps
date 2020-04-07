//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBASSISTANTSlackConversationType, NSString;

@interface DBASSISTANTSlackActivityInfo : NSObject <DBSerializable, NSCopying>
{
    DBASSISTANTSlackConversationType *_slackConversationType;
    NSString *_slackConversationName;
    NSString *_slackDeepLink;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *slackDeepLink; // @synthesize slackDeepLink=_slackDeepLink;
@property(readonly, copy, nonatomic) NSString *slackConversationName; // @synthesize slackConversationName=_slackConversationName;
@property(readonly, nonatomic) DBASSISTANTSlackConversationType *slackConversationType; // @synthesize slackConversationType=_slackConversationType;
- (void).cxx_destruct;
- (_Bool)isEqualToSlackActivityInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithSlackConversationType:(id)arg1 slackConversationName:(id)arg2 slackDeepLink:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
