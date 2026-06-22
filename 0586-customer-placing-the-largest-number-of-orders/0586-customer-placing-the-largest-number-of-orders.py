import pandas as pd

def largest_orders(orders: pd.DataFrame) -> pd.DataFrame:

    return orders.groupby(
        'customer_number', as_index=False
    ).order_number.count().rename(
        columns={'order_number': 'orders'}
    ).sort_values(
        'orders', ascending=False
    ).reset_index(drop=True).loc[[0], ['customer_number']]