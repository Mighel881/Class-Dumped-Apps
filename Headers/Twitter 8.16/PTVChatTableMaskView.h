//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVContainerView.h>

@class CAGradientLayer, UITableView;

@interface PTVChatTableMaskView : PTVContainerView
{
    _Bool _isObservingTableView;
    CAGradientLayer *_maskLayer;
    _Bool _maskIsVisible;
    UITableView *_tableView;
    double _maskHeight;
}

@property(nonatomic) double maskHeight; // @synthesize maskHeight=_maskHeight;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setMaskIsVisible:(_Bool)arg1;
- (void)updateMaskLayer;
- (id)maskLayer;
- (void)scrollViewContentOffsetDidChange;
- (void)stopObservingTableView;
- (void)startObservingTableView;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

