//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, _TtC9TwitchKit39TWMessageParserUnlocalizedSubGiftNotice, _TtC9TwitchKit41TWMessageParserUnlocalizedExtendSubNotice, _TtC9TwitchKit43TWMessageParserUnlocalizedSubMassGiftNotice, _TtC9TwitchKit44TWMessageParserUnlocalizedSubscriptionNotice, _TtC9TwitchKit8Identity;

@protocol _TtP9TwitchKit37TWMessageParserSystemMessageLocalizer_
- (void)addChannelIdentity:(_TtC9TwitchKit8Identity *)arg1;
- (void)loadPricesForSubscriptionProductsInChannelWithIdentifier:(unsigned int)arg1;
- (NSString *)localizedExtendSubSystemMessageWithNotice:(_TtC9TwitchKit41TWMessageParserUnlocalizedExtendSubNotice *)arg1;
- (NSString *)localizedSubMassGiftSystemMessageWithNotice:(_TtC9TwitchKit43TWMessageParserUnlocalizedSubMassGiftNotice *)arg1;
- (NSString *)localizedSubGiftSystemMessageWithNotice:(_TtC9TwitchKit39TWMessageParserUnlocalizedSubGiftNotice *)arg1;
- (NSString *)localizedSubscriptionSystemMessageWithNotice:(_TtC9TwitchKit44TWMessageParserUnlocalizedSubscriptionNotice *)arg1;
@end

