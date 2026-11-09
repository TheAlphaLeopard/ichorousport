// gml_Script___scribble_buffer_read_unicode @ 0x1401f12e0

double * gml_Script___scribble_buffer_read_unicode
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  double local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script___scribble_array_find_index";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  bVar4 = 5;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  uStack_6c = 0;
  local_78 = 0.0;
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)*param_5;
  }
  iVar7 = 0;
  if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
    iVar7 = *(int *)(*plVar5 + 0x24);
  }
  if (0 < iVar7) {
    do {
      iVar7 = iVar7 + -1;
      local_48 = 0x71;
      if (param_4 < 2) {
        puVar6 = &DAT_1419df7b0;
        iVar2 = FUN_140e4a740(&local_78);
        if (param_4 < 1) {
          plVar5 = &DAT_1419df7b0;
        }
        else {
          plVar5 = (longlong *)*param_5;
        }
      }
      else {
        puVar6 = (undefined8 *)param_5[1];
        iVar2 = FUN_140e4a740(&local_78);
        plVar5 = (longlong *)*param_5;
      }
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      iVar2 = FUN_140e851f0(plVar5,puVar6,DAT_141955260,0);
      if (iVar2 == 0) {
        local_48 = 0x71;
        if (&local_78 != param_3) {
          uStack_60 = uStack_70;
          uStack_5c = uStack_6c;
          local_68 = local_78;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_68);
        }
        goto LAB_1401f14ea;
      }
      local_48 = 0x72;
      uVar3 = uStack_6c & 0xffffff;
      if (uVar3 == 0) {
LAB_1401f149a:
        local_78 = local_78 + 1.0;
      }
      else {
        if (uVar3 == 1) {
          local_78 = (double)FUN_140e4b060(&local_78);
          uStack_6c = 0;
          goto LAB_1401f149a;
        }
        if (uVar3 == 7) {
          local_78 = (double)CONCAT44(local_78._4_4_,local_78._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_78 = (double)((longlong)local_78 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            uStack_6c = 0;
            goto LAB_1401f149a;
          }
          FUN_140042910(&DAT_14172c3d8,&local_78,&local_78);
        }
      }
    } while (0 < iVar7);
    bVar4 = (byte)*(undefined4 *)((longlong)param_3 + 0xc);
  }
  local_48 = 0x75;
  if ((1 << (bVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (double)&DAT_bff0000000000000;
LAB_1401f14ea:
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

