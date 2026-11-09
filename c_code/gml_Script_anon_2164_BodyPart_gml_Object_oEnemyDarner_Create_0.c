// gml_Script_anon_2164_BodyPart_gml_Object_oEnemyDarner_Create_0 @ 0x140997710

undefined8 *
gml_Script_anon_2164_BodyPart_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_a0 = "gml_Script_update@BodyPart@gml_Object_oEnemyDarner_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x4b;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x4d;
  uVar5 = 0;
  gml_Script_draw_BodyPart_gml_Object_oEnemyDarner_Create_0(param_1,param_2,&local_e8,0,0);
  local_98 = 0x4f;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uStack_ec = 0;
  local_f8 = (longlong *)0xc010000000000000;
  iVar1 = FUN_140e851f0(uVar3,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 != 0) {
    local_98 = 0x51;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09fa8);
    uStack_ec = 6;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_141a0a778,0x80000000,&local_b8,uVar5 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e87170(uVar3,DAT_141a0a778,0x80000000,&local_c8,param_1,param_2);
    local_f8 = (longlong *)local_b8;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_f8);
    local_48 = local_90;
    local_f8 = (longlong *)local_c8;
    uStack_f0 = uStack_c0;
    uStack_ec = uStack_bc;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_f8);
    local_40 = local_80;
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = (longlong *)*puVar4;
    }
    else {
      FUN_1400419b0(&local_f8,puVar4);
    }
    FUN_140042560(&local_f8,uVar2);
    local_58 = (undefined4)local_f8;
    uStack_54 = local_f8._4_4_;
    uStack_50 = uStack_f0;
    uStack_4c = uStack_ec;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_58);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_38 = local_70;
    puVar4 = (undefined8 *)gml_Script_animation_end(param_1,param_2,&local_e8,3,&local_48);
    if (puVar4 != &local_d8) {
      local_58 = *(undefined4 *)puVar4;
      uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_50 = *(undefined4 *)(puVar4 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_58);
    }
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

