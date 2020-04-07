//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTFeatureSettingsItemFactory, SPTPlayer;

@interface SPTNowPlayingFeatureSettings : NSObject
{
    id <SPTFeatureSettingsItemFactory> _settingsItemFactory;
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTFeatureSettingsItemFactory> settingsItemFactory; // @synthesize settingsItemFactory=_settingsItemFactory;
- (void).cxx_destruct;
- (void)registerSettings;
- (id)initWithSettingsItemFactory:(id)arg1 player:(id)arg2;

@end
