// gml_Object_oOfferingPickup_Draw_0 @ 0x140b93100

void gml_Object_oOfferingPickup_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  
  local_50 = "gml_Object_oOfferingPickup_Alarm_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_48 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f48c8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56bd0);
  uStack_dc = 6;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_b8,uVar4,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_c8,uVar4,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_d8,uVar4 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = local_b8;
  uStack_e0 = uStack_b0;
  uStack_dc = uStack_ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_40 = local_98;
  local_e8 = local_c8;
  uStack_e0 = uStack_c0;
  uStack_dc = uStack_bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_38 = local_88;
  if (puVar1 != &local_78) {
    local_e8 = (longlong *)*puVar1;
    uStack_e0 = *(undefined4 *)(puVar1 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_e8);
  }
  local_30 = &local_78;
  local_e8 = local_d8;
  uStack_e0 = uStack_d0;
  uStack_dc = uStack_cc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_e8);
  local_28 = local_68;
  FUN_140e609c0(param_1);
  puVar1 = (undefined8 *)gml_Script_title_line_height(param_1,param_2,&local_a8,4,&local_40);
  if (puVar1 != puVar2) {
    local_e8 = (longlong *)*puVar1;
    uStack_e0 = *(undefined4 *)(puVar1 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

