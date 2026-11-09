// gml_Script_draw_BodyPart_gml_Object_oEnemyDarner_Create_0 @ 0x140997060

undefined8 *
gml_Script_draw_BodyPart_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  ulonglong in_stack_fffffffffffffee0;
  undefined1 **ppuVar8;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_50 = "gml_Script_constrain@BodyPart@gml_Object_oEnemyDarner_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x42;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = (longlong *)0x0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x44;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uStack_10c = 0;
  local_118 = (longlong *)0xc010000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_118,DAT_141955260,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar1 == 0) {
    local_48 = 0x44;
  }
  else {
    local_48 = 0x46;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0c28);
    uStack_10c = 6;
    local_118 = param_1;
    FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_68,
                  (ulonglong)pcVar4 & 0xffffffffffffff00,
                  in_stack_fffffffffffffee0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    plVar5 = param_1;
    FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_78,param_1,param_2);
    uVar7 = (undefined4)((ulonglong)plVar5 >> 0x20);
    local_108 = local_68;
    uStack_100 = uStack_60;
    uStack_fc = uStack_5c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_108);
    local_40 = local_c8;
    local_108 = local_78;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
    local_38 = local_b8;
    if (puVar3 != &local_a8) {
      local_108 = (longlong *)*puVar3;
      uStack_100 = *(undefined4 *)(puVar3 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_108);
    }
    local_30 = &local_a8;
    ppuVar8 = &local_40;
    uVar6 = CONCAT44(uVar7,DAT_141a00c58);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,3,uVar6,ppuVar8);
    if (puVar3 != &local_d8) {
      local_108 = (longlong *)*puVar3;
      uStack_100 = *(undefined4 *)(puVar3 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_108);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_d8);
    local_48 = 0x47;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uStack_10c = 6;
    local_118 = param_1;
    FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_88,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0c28);
    plVar5 = param_1;
    FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_98,param_1,param_2);
    uVar7 = (undefined4)((ulonglong)plVar5 >> 0x20);
    local_108 = local_88;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_108);
    local_40 = local_c8;
    local_108 = local_98;
    uStack_100 = uStack_90;
    uStack_fc = uStack_8c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
    local_38 = local_b8;
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
      local_118 = (longlong *)*puVar3;
    }
    else {
      FUN_1400419b0(&local_118,puVar3);
    }
    uStack_fc = 0;
    local_108 = (longlong *)0x3ffc000000000000;
    FUN_140042560(&local_118,&local_108);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = local_118;
    uStack_100 = uStack_110;
    uStack_fc = uStack_10c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_30 = &local_a8;
    puVar3 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar7,DAT_141a00c58),&local_40);
    if (puVar3 != &local_e8) {
      local_108 = (longlong *)*puVar3;
      uStack_100 = *(undefined4 *)(puVar3 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_108);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

