// gml_Object_oParPickup_Draw_0 @ 0x140bb8bd0

void gml_Object_oParPickup_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *local_res8;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [3];
  byte local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oParPickup_Alarm_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_38 = 1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  if (puVar1 != &local_a8) {
    local_68 = *(undefined4 *)puVar1;
    uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_68);
  }
  FUN_140e87930(uVar2,DAT_141a56c70,0x80000000,&local_a8);
  local_38 = 3;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a0a9f8,0x80000000,&local_78,uVar5,0);
  local_68 = (undefined4)local_78;
  uStack_64 = local_78._4_4_;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_68);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_38 = 4;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  FUN_140e87440(puVar3,DAT_141a0a9f8,0x80000000,&local_78,uVar5 & 0xffffffffffffff00,0);
  local_68 = (undefined4)local_78;
  uStack_64 = local_78._4_4_;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_68);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_98);
  local_38 = 6;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if (puVar3 != local_58) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_68);
  }
  local_res8 = local_58;
  gml_Script_anon_2483_add_trinket_TRINKETSINIT(param_1,param_2,&local_b8,1,&local_res8);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

