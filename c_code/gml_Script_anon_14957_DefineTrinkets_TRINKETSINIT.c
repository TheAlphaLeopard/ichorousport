// gml_Script_anon_14957_DefineTrinkets_TRINKETSINIT @ 0x1405f1490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_14957_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Script_anon@14292@DefineTrinkets@TRINKETSINIT";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x231;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x233;
  local_78 = _DAT_1419e6a20;
  uStack_74 = uRam00000001419e6a24;
  uStack_70 = (undefined1 *)CONCAT44(uRam00000001419e6a2c,uRam00000001419e6a28);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  uStack_70 = local_40;
  puVar4 = &uStack_70;
  uVar3 = gml_Script_choose_weighted(param_1,param_2,&local_88,1,puVar4);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') goto LAB_1405f1678;
  local_58 = 0x235;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar5 = (ulonglong)puVar4 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_98,uVar5,0);
  FUN_140e87440(&local_98,DAT_1419ff9c8,0x80000000,&local_a8,uVar5 & 0xffffffffffffff00,0);
  uVar2 = local_9c & 0xffffff;
  if (uVar2 == 0) {
LAB_1405f1651:
    local_a8 = local_a8 + 1.0;
  }
  else {
    if (uVar2 == 1) {
      local_a8 = (double)FUN_140e4b060(&local_a8);
      local_9c = 0;
      goto LAB_1405f1651;
    }
    if (uVar2 == 7) {
      local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
    }
    else if (uVar2 == 10) {
      local_a8 = (double)((longlong)local_a8 + 1);
    }
    else {
      if (uVar2 == 0xd) {
        local_9c = 0;
        goto LAB_1405f1651;
      }
      FUN_140042910(&DAT_14172c3d8,&local_a8,&local_a8);
    }
  }
  FUN_140e87930(&local_98,DAT_1419ff9c8,0x80000000,&local_a8);
LAB_1405f1678:
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

