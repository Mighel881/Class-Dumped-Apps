//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DebugTableViewDataSource, NSArray, NSIndexSet, NSString, UITableViewCell, UIViewController;

@protocol DebugTableViewDataSourceDelegate
- (UITableViewCell *)debugTableViewDataSource:(DebugTableViewDataSource *)arg1 dequeueReusableCellWithIdentifier:(NSString *)arg2;
- (void)debugTableViewDataSource:(DebugTableViewDataSource *)arg1 reloadRowsAtIndexPaths:(NSArray *)arg2;
- (void)debugTableViewDataSource:(DebugTableViewDataSource *)arg1 reloadSections:(NSIndexSet *)arg2;
- (void)debugTableViewDataSource:(DebugTableViewDataSource *)arg1 setCacheSize:(unsigned long long)arg2 forRole:(int)arg3;
- (void)debugTableViewDataSource:(DebugTableViewDataSource *)arg1 dismissWithCompletion:(void (^)(void))arg2;
- (void)debugTableViewDataSource:(DebugTableViewDataSource *)arg1 displayViewController:(UIViewController *)arg2 present:(_Bool)arg3;
- (void)debugTableViewDataSourceDidScrollOrTapBlock:(DebugTableViewDataSource *)arg1;
- (void)debugTableViewDataSourceDidUpdate:(DebugTableViewDataSource *)arg1;
@end

