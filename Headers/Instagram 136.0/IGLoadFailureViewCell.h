//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIButton, UILabel;
@protocol IGLoadFailureViewCellRetryDelegate;

@interface IGLoadFailureViewCell : UICollectionViewCell
{
    id <IGLoadFailureViewCellRetryDelegate> _retryDelegate;
    NSString *_errorMessage;
    UILabel *_label;
    UIButton *_retryButton;
}

@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) __weak id <IGLoadFailureViewCellRetryDelegate> retryDelegate; // @synthesize retryDelegate=_retryDelegate;
- (void).cxx_destruct;
- (void)_retryPressed:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

