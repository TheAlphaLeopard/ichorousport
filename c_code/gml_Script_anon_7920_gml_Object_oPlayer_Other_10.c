// gml_Script_anon_7920_gml_Object_oPlayer_Other_10 @ 0x140c6b210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7920_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_90 = "gml_Script_anon@7096@gml_Object_oPlayer_Other_10";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x12e;
  FUN_140041df0(local_68,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x12e;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x12e;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef908);
    if ((int)local_68[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_60;
    }
    if (puVar3 != puVar5) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_f8);
    }
  }
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef968);
    if ((int)local_68[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_60[1];
    }
    if (puVar3 != puVar5) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_f8);
    }
  }
  local_88 = 0x130;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
  uStack_ec = 0;
  local_f8 = 0;
  iVar1 = FUN_140e851f0(uVar4,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uVar2 = 1 << ((byte)local_dc & 0x1f);
  if (iVar1 == 0) {
    local_88 = 0x133;
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar3 != &local_c8) {
      local_d8 = *(undefined4 *)puVar3;
      uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_d8);
    }
    local_80 = &local_c8;
    local_d8 = _DAT_141dc7490;
    uStack_d4 = uRam0000000141dc7494;
    uStack_d0 = uRam0000000141dc7498;
    uStack_cc = uRam0000000141dc749c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_d8);
    local_78 = local_b8;
    if (((int)local_68[0] < 2) || (puVar8 = (undefined8 *)local_60[1], puVar8 != &local_a8)) {
      local_d8 = *(undefined4 *)puVar8;
      uStack_d4 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_d0 = *(undefined4 *)(puVar8 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_d8);
    }
    local_70 = &local_a8;
    FUN_140e609c0(param_1);
    puVar7 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_e8,3,&local_80);
    if (puVar7 == puVar6) goto LAB_140c6b7ad;
    local_d8 = *puVar7;
    uStack_d4 = puVar7[1];
    uStack_d0 = puVar7[2];
    uStack_cc = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
  }
  else {
    local_88 = 0x131;
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff178);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar3 != &local_c8) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_f8);
    }
    local_80 = &local_c8;
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_f8,puVar5);
    }
    FUN_140042560(&local_f8,uVar4);
    local_d8 = (undefined4)local_f8;
    uStack_d4 = local_f8._4_4_;
    uStack_d0 = uStack_f0;
    uStack_cc = uStack_ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_d8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_78 = local_b8;
    if (((int)local_68[0] < 1) || (puVar8 = (undefined8 *)*local_60, puVar8 != &local_a8)) {
      local_d8 = *(undefined4 *)puVar8;
      uStack_d4 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_d0 = *(undefined4 *)(puVar8 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_d8);
    }
    local_70 = &local_a8;
    FUN_140e609c0(param_1);
    puVar7 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_e8,3,&local_80);
    if (puVar7 == puVar6) goto LAB_140c6b7ad;
    local_d8 = *puVar7;
    uStack_d4 = puVar7[1];
    uStack_d0 = puVar7[2];
    uStack_cc = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
  }
  FUN_140041b80(puVar6,&local_d8);
LAB_140c6b7ad:
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,3,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar8 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

