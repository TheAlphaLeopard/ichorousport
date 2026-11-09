// gml_Script_anon_7305_gml_Object_oPlayer_Other_10 @ 0x140c6acf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_7305_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_b0 = "gml_Script_anon@6832@gml_Object_oPlayer_Other_10";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x120;
  FUN_140041df0(local_50,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_dc = 0;
  uVar7 = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x120;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_48;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0x120;
    uStack_cc = 0xd;
    local_d8 = 0;
    if ((int)local_50[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_48;
      if (&local_d8 == puVar4) goto LAB_140c6ae51;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
LAB_140c6ae51:
  local_a8 = 0x121;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_c8 = _DAT_1419ed040;
  uStack_c4 = uRam00000001419ed044;
  uStack_c0 = uRam00000001419ed048;
  uStack_bc = uRam00000001419ed04c;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_c8);
  local_60 = local_a0;
  local_c8 = (undefined4)DAT_1419df7b0;
  uStack_c4 = DAT_1419df7b0._4_4_;
  uStack_c0 = DAT_1419df7b8;
  uStack_bc = DAT_1419df7bc;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_c8);
  local_58 = local_90;
  ppuVar8 = &local_60;
  uVar3 = gml_Script_InputPressedMany(param_1,param_2,&local_e8,2,ppuVar8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    if (0 < (int)local_50[0]) {
      puVar6 = (undefined8 *)*local_48;
    }
    cVar1 = FUN_140e491e0(puVar6);
    if (cVar1 != '\0') goto LAB_140c6af3c;
  }
  else {
LAB_140c6af3c:
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef298);
    in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419ef278,0x80000000,&local_70,uVar9,in_stack_ffffffffffffff10);
    cVar1 = FUN_140e491e0(&local_70);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef238);
      uStack_cc = 0;
      local_d8 = 0;
      iVar2 = FUN_140e851f0(uVar3,&local_d8,DAT_141955260,1);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        local_a8 = 0x123;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8178);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0;
        local_a8 = 0x124;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_80,uVar9 & 0xffffffffffffff00,
                      in_stack_ffffffffffffff10 & 0xffffffffffffff00);
        local_c8 = _DAT_141ddaa78;
        uStack_c4 = uRam0000000141ddaa7c;
        uStack_c0 = uRam0000000141ddaa80;
        uStack_bc = DAT_141ddaa84;
        if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a0);
        }
        FUN_140041b80(local_a0,&local_c8);
        local_60 = local_a0;
        uVar3 = FUN_140069500(uVar3);
        FUN_140e63610(uVar3,param_2,&local_e8,1,&local_80,&local_60);
        local_a8 = 0x126;
        uVar7 = 0x3ff00000;
        goto LAB_140c6b106;
      }
    }
  }
  local_a8 = 0x12a;
LAB_140c6b106:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,2,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar6 = local_48;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

