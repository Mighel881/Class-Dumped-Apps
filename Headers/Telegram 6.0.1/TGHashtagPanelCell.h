//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TGConversationAssociatedInputPanelPallete, UILabel, UIView;

@interface TGHashtagPanelCell : UITableViewCell
{
    int _style;
    UILabel *_label;
    UIView *_separatorView;
    TGConversationAssociatedInputPanelPallete *_pallete;
}

@property(retain, nonatomic) TGConversationAssociatedInputPanelPallete *pallete; // @synthesize pallete=_pallete;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHashtag:(id)arg1;
- (void)setDisplaySeparator:(_Bool)arg1;
- (id)initWithStyle:(int)arg1;

@end
