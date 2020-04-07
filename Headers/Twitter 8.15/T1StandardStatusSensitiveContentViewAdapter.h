//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNComposableViewAdapter.h>

@interface T1StandardStatusSensitiveContentViewAdapter : TFNComposableViewAdapter
{
    unsigned long long _displayType;
}

+ (id)accessibilityHintForSensitiveMediaInTweetDetail;
+ (id)accessibilityHintForSensitiveMedia;
+ (id)sensitiveContentRichTextInTweetDetail;
+ (id)sensitiveContentRichText;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (id)accessibilityHintForViewModel:(id)arg1;
- (id)sensitiveContentRichTextForViewModel:(id)arg1;
- (_Bool)isLayoutState:(id)arg1 validForViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (void)view:(id)arg1 willMoveToHostView:(id)arg2;
- (void)setViewModel:(id)arg1 forView:(id)arg2;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
- (id)initializeView;
- (id)initWithViewIdentifier:(long long)arg1 displayType:(unsigned long long)arg2;

@end
