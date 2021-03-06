//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBEmojiUnicodeStoring-Protocol.h>

@class NSString;

@interface FBEmojiUnicodeStore : NSObject <FBEmojiUnicodeStoring>
{
}

+ (id)sharedStoreWithOSVersionCheck:(_Bool)arg1;
+ (id)sharedStore;
- (id)emojisVariationSet;
- (id)emojiEligibleForSkintone;
- (id)defaultFrequentlyUsedEmojis;
- (id)travelAndPlacesEmojis;
- (id)symbolsEmojis;
- (id)objectsEmojis;
- (id)foodAndDrinkEmojis;
- (id)flagsEmojis;
- (id)animalsAndNatureEmojis;
- (id)activityEmojis;
- (id)smileysAndPeopleEmojis;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

