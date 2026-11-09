// gml_Script_anon_29796____struct___662_gml_Object_oPlayer_Create_0 @ 0x140c18490

undefined8 *
gml_Script_anon_29796____struct___662_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *local_res8;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  
  local_50 = "gml_Script_anon@29614@___struct___661@gml_Object_oPlayer_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x633;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_40,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x634;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if (puVar1 != &local_98) {
    local_78 = *puVar1;
    uStack_70 = *(undefined4 *)(puVar1 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_78);
  }
  FUN_140e87930(uVar2,DAT_141a0a7f8,0x80000000,&local_98);
  local_48 = 0x635;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_48 = 0x636;
  uStack_6c = 0xf;
  local_78 = 0x1000001000003f0;
  local_68 = 0x3f0;
  uStack_64 = 0x1000001;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_68);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_88);
  local_48 = 0x637;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f80a8,0x80000000,&local_a8,uVar4,0);
  FUN_140e609c0(param_1);
  if (&local_a8 != puVar1) {
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x638;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f35e8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar2,DAT_1419f80a8,0x80000000,&local_a8,uVar4 & 0xffffffffffffff00,0);
  FUN_140e609c0(param_1);
  if (&local_a8 != puVar1) {
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x63a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_6c = 0xf;
  local_78 = 0x100000000000149;
  local_68 = 0x149;
  uStack_64 = 0x1000000;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_68);
  local_res8 = local_40;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_b8,1,&local_res8);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

