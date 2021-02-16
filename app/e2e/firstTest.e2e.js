
describe('Example', () => {

  it('first test', async () => {
    await expect(element(by.id('count'))).toHaveText('0');
    await element(by.text('+')).tap();
    await expect(element(by.id('count'))).toHaveText('1');
    await element(by.text('-')).tap();
    await expect(element(by.id('count'))).toHaveText('0');
  });

});
