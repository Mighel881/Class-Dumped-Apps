//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsModuleTransformer.h>

@class TFNTwitterAccount;
@protocol TFNTwitterScribeImpressionCache;

@interface T1SuggestsModuleItemsTransformer : TFNItemsModuleTransformer
{
    TFNTwitterAccount *_account;
    id <TFNTwitterScribeImpressionCache> _scribeImpressionCache;
}

- (void).cxx_destruct;
- (id)itemsPredicate;
- (id)reuseIdentifierForModule:(id)arg1;
- (id)itemsForModule:(id)arg1;
- (id)sectionControllerForModule:(id)arg1;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2;

@end

