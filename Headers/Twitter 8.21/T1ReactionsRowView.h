//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class T1ReactionItem, T1ReactionsRowItem;

@interface T1ReactionsRowView : UIStackView
{
    T1ReactionsRowItem *_reactionsRow;
    T1ReactionItem *_moreReactionItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1ReactionItem *moreReactionItem; // @synthesize moreReactionItem=_moreReactionItem;
@property(copy, nonatomic) T1ReactionsRowItem *reactionsRow; // @synthesize reactionsRow=_reactionsRow;
- (void)_t1_didTapReactionButton:(id)arg1;
- (void)_t1_updateReactionButtons;
- (void)_t1_setUpReactionButtons;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithItem:(id)arg1;
- (id)init;

@end

