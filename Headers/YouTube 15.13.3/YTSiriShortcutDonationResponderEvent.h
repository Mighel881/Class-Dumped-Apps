//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@protocol YTSiriShortcut;

@interface YTSiriShortcutDonationResponderEvent : YTResponderEvent
{
    id <YTSiriShortcut> _shortcutToDonate;
}

+ (id)eventWithShortcut:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) id <YTSiriShortcut> shortcutToDonate; // @synthesize shortcutToDonate=_shortcutToDonate;
- (void).cxx_destruct;
- (id)initWithShortcut:(id)arg1 firstResponder:(id)arg2;

@end
