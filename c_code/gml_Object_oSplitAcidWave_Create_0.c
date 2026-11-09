// gml_Object_oSplitAcidWave_Create_0 @ 0x140d9efa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSplitAcidWave_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong **pplVar2;
  undefined1 *local_res8;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oSplitAcidRain_Create_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_38 = 3;
  FUN_140e98b30(param_1,param_2);
  local_38 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57f90);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5a08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4056800000000000;
  local_38 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ffa666666666666;
  local_38 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ffa666666666666;
  local_38 = 0xd;
  pplVar2 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a012b8);
  uStack_4c = 6;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_58 = param_1;
  FUN_140e87440(&local_58,DAT_141a1b910,0x80000000,&local_78,uVar4,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e609c0(param_1);
  if (&local_78 != pplVar2) {
    local_58 = local_78;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0xe;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_58 = (longlong *)CONCAT44(uRam0000000141ddb95c,_DAT_141ddb958);
  uStack_50 = uRam0000000141ddb960;
  uStack_4c = DAT_141ddb964;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_58);
  local_res8 = local_68;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar5,DAT_141a1c640),&local_res8);
  if (puVar1 != &local_88) {
    local_58 = (longlong *)*puVar1;
    uStack_50 = *(undefined4 *)(puVar1 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
  }
  FUN_140e86fa0(param_1,DAT_141a1b910,0x80000000,&local_88);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

