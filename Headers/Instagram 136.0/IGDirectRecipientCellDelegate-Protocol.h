//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectRecipientCell, UIButton;

@protocol IGDirectRecipientCellDelegate <NSObject>
- (void)directRecipientCellDidTapSubtitle:(IGDirectRecipientCell *)arg1;
- (void)directRecipientCellDidTapChevronAccessoryButton:(UIButton *)arg1;
- (void)directRecipientCellDidLongPress:(IGDirectRecipientCell *)arg1;
- (_Bool)directRecipientCellShouldLongPress:(IGDirectRecipientCell *)arg1;
@end

