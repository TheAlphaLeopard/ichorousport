// gml_Script_preprocessor_anon_43831___scribble_class_element___scribble_class_element @ 0x14012e230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_preprocessor_anon_43831___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *local_res8;
  undefined1 **ppuVar6;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_refresh@anon@42516@__scribble_class_element@__scribble_class_element";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x565;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x567;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_78 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_70 = uRam00000001419df7a8;
  uStack_6c = uRam00000001419df7ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_78);
  local_res8 = local_98;
  ppuVar6 = &local_res8;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_b8,1,uVar3,ppuVar6);
  if (puVar4 != &local_a8) {
    local_78 = *puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_78);
  }
  local_48 = 0x568;
  iVar1 = FUN_140e851f0(&local_a8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) goto LAB_14012e68b;
  local_48 = 0x56a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  FUN_140e87440(&local_a8,DAT_141a05b58,0x80000000,&local_88,uVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  switch(local_9c) {
  default:
switchD_14012e41c_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_a8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_a8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14012e41c_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_a8);
    uVar5 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar5,param_2,&local_b8,0,&local_88,0);
  local_48 = 0x56c;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar4) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  local_48 = 0x56d;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d88);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar4) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  local_48 = 0x56e;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar4) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  local_48 = 0x56f;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053a8);
  uStack_6c = 0xd;
  local_78 = 0x3ff0000000000000;
  if (&local_78 != puVar4) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  local_48 = 0x571;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_68 = _DAT_1419df7c0;
  uStack_64 = uRam00000001419df7c4;
  uStack_60 = uRam00000001419df7c8;
  uStack_5c = uRam00000001419df7cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_68);
  local_res8 = local_98;
  FUN_140e63610(param_1,param_2,&local_b8,1,uVar5,&local_res8);
LAB_14012e68b:
  local_48 = 0x574;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

