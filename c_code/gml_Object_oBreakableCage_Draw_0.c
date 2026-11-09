// gml_Object_oBreakableCage_Draw_0 @ 0x14084c030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBreakableCage_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined8 *local_40;
  undefined1 *local_38;
  
  local_70 = "gml_Object_oBreakableCage_Alarm_3";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_68 = 1;
  FUN_140e98b30(param_1,param_2);
  local_68 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09fb8);
  uStack_ac = 6;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a778,0x80000000,&local_a8,uVar7,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((uStack_9c & 0xffffff) == 0) {
    uVar5 = SUB84(local_a8,0);
  }
  else {
    uVar5 = FUN_140e4b060(&local_a8);
  }
  uVar1 = FUN_140e79500(uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_68 = 4;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09fa8);
  uStack_ac = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a778,0x80000000,&local_a8,uVar7,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((uStack_9c & 0xffffff) == 0) {
    uVar5 = SUB84(local_a8,0);
  }
  else {
    uVar5 = FUN_140e4b060(&local_a8);
  }
  local_60 = FUN_140e78d00(uVar5);
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  local_54 = 0;
  local_40 = &local_60;
  local_b8 = (longlong *)CONCAT44(uRam00000001419e8ef4,_DAT_1419e8ef0);
  uStack_b0 = uRam00000001419e8ef8;
  uStack_ac = uRam00000001419e8efc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_38 = local_50;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)FUN_140e79090(&local_98,2,&local_40);
  if (puVar3 != puVar2) {
    local_b8 = (longlong *)*puVar3;
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  FUN_140e60910(1);
  local_68 = 5;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  uStack_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a778,0x80000000,&local_a8,uVar7 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e609c0(param_1);
  if (&local_a8 != pplVar4) {
    local_b8 = local_a8;
    uStack_b0 = uStack_a0;
    uStack_ac = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_b8);
  }
  FUN_140e60910(1);
  local_68 = 6;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_88);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

