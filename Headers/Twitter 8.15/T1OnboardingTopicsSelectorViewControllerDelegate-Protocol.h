//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, T1OnboardingTopicsSelectorViewController;

@protocol T1OnboardingTopicsSelectorViewControllerDelegate <NSObject>
- (void)topicsSelectorViewControllerDidTapSkip:(T1OnboardingTopicsSelectorViewController *)arg1;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 didTapNextWithSelectedTopicsByLocation:(NSDictionary *)arg2;
- (NSString *)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 subtitleForTopic:(id)arg2;
- (NSString *)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 titleForTopic:(id)arg2;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 fetchResultsForSearchText:(NSString *)arg2 completion:(void (^)(NSArray *, NSString *))arg3;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 fetchResultsForCategory:(id)arg2 completion:(void (^)(NSArray *, NSString *))arg3;
- (id)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 categoryForFetchResult:(id)arg2;
- (id)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 topicForFetchResult:(id)arg2;
- (NSString *)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 titleForCategory:(id)arg2;
- (NSArray *)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 childCategoriesForCategory:(id)arg2;
- (void)topicsSelectorViewControllerDidBecomeVisible:(T1OnboardingTopicsSelectorViewController *)arg1;

@optional
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 didDeselectTopic:(id)arg2 withRowIndex:(NSNumber *)arg3 location:(long long)arg4 selectedTopicsByLocation:(NSDictionary *)arg5;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 didSelectTopic:(id)arg2 withRowIndex:(NSNumber *)arg3 location:(long long)arg4 selectedTopicsByLocation:(NSDictionary *)arg5;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 didUnexpandCategory:(id)arg2 withRowIndex:(NSNumber *)arg3;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 didExpandCategory:(id)arg2 withRowIndex:(NSNumber *)arg3;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 didScrollCategory:(id)arg2 withRowIndex:(NSNumber *)arg3;
- (void)topicsSelectorViewController:(T1OnboardingTopicsSelectorViewController *)arg1 didSelectCategory:(id)arg2 withRowIndex:(NSNumber *)arg3 columnIndex:(NSNumber *)arg4;
- (void)topicsSelectorViewControllerDidScrollCart:(T1OnboardingTopicsSelectorViewController *)arg1;
- (void)topicsSelectorViewControllerDidDismissCart:(T1OnboardingTopicsSelectorViewController *)arg1;
- (void)topicsSelectorViewControllerDidPresentCart:(T1OnboardingTopicsSelectorViewController *)arg1;
@end

