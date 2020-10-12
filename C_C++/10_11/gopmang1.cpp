ic = 0;
for (ia = 0; ia < nb + nc; ia++)
{
  if (ib >= nb || ic >= nc)
  {
    break;
  }
  if (ia % 2 == 0)
  {
    a[ia] = b[ib];
    ib++;
  }
  else
  {
    a[ia] = c[ic];
    ic++;
  }
}

if (ib < nb)
{
  while (ib < nb)
  {
    a[ia++] = b[ib++];
  }
}
if (ic < nc)
{
  while (ic < nc)
  {
    a[ia++] = c[ic++];
  }
}
for (ia = 0; ia < nb + nc; ia++)
{
  cout << " " << a[ia];
}

return 0;
}