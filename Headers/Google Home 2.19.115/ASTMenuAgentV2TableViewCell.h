//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuBaseTableViewCell.h"

@class GIPNetworkImageView, NSString, UIButton, UILabel, UIView;

@interface ASTMenuAgentV2TableViewCell : ASTMenuBaseTableViewCell
{
    UIView *_suggestionChip;
    GIPNetworkImageView *_agentIconImageView;
    NSString *_invocationText;
    UIView *_verticalSeparatorView;
    UIButton *_accessoryButton;
    UILabel *_invocationlabel;
}

@property(readonly, nonatomic) UILabel *invocationlabel; // @synthesize invocationlabel=_invocationlabel;
@property(readonly, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(readonly, nonatomic) UIView *verticalSeparatorView; // @synthesize verticalSeparatorView=_verticalSeparatorView;
@property(copy, nonatomic) NSString *invocationText; // @synthesize invocationText=_invocationText;
@property(readonly, nonatomic) GIPNetworkImageView *agentIconImageView; // @synthesize agentIconImageView=_agentIconImageView;
- (void).cxx_destruct;
- (void)setUpAccessoryButtonPositionConstraints;
- (void)setUpAccessoryButtonSizeConstraints;
- (void)setUpInvocationLabelPositionConstraints;
- (void)setUpAgentIconPositionConstraints;
- (void)setUpAgentIconSizeConstraints;
- (void)updateInvocationLabel;
- (id)invocationTextAttributes;
- (void)setUpDefaultStyles;
- (void)setUpConstraints;
- (void)addCustomSubViews;
- (void)prepareForReuse;

@end

