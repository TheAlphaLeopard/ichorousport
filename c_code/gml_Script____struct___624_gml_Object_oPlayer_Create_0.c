// gml_Script____struct___624_gml_Object_oPlayer_Create_0 @ 0x140bed080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___624_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  byte local_b4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_d0 = "gml_Script_anon@18601@___struct___624@gml_Object_oPlayer_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x3a3;
  FUN_140041df0(local_50,param_4,1,param_5);
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_c0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x3a3;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_48;
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (local_c8 = 0x3a3, 0 < (int)local_50[0])) &&
     (puVar5 = (undefined8 *)*local_48, puVar5 != &DAT_1419df7b0)) {
    local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_f0 = DAT_1419df7b8;
    uStack_ec = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_f8);
  }
  local_c8 = 0x3a4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar3,DAT_1419f5df8,0x80000000,&local_60,(ulonglong)pcVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  puVar5 = &local_60;
  puVar4 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_108,0,puVar5,0);
  uVar9 = (undefined4)((ulonglong)puVar5 >> 0x20);
  if (puVar4 != &local_e8) {
    local_f8 = *puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
  }
  local_c8 = 0x3a7;
  uStack_ec = DAT_141dda854;
  uStack_f0 = DAT_141dda850;
  if ((1 << ((byte)DAT_141dda854 & 0x1f) & 0x46U) == 0) {
    local_f8 = DAT_141dda848;
  }
  else {
    FUN_1400419b0(&local_f8,&DAT_141dda848);
  }
  iVar1 = FUN_140e851f0(&local_e8,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 != 0) {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_f8 = CONCAT44(uRam0000000141dda6fc,_DAT_141dda6f8);
    uStack_f0 = uRam0000000141dda700;
    uStack_ec = DAT_141dda704;
    if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_f8);
    local_a0 = &local_c0;
    local_98 = &local_e8;
    ppuVar10 = &local_a0;
    uVar11 = CONCAT44(uVar9,DAT_141a02d88);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar11,ppuVar10);
    uStack_ec = 0;
    local_f8 = 0;
    iVar1 = FUN_140e851f0(uVar3,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar1 < 1) {
      local_c8 = 0x3aa;
      uStack_ec = DAT_141dda754;
      uStack_f0 = DAT_141dda750;
      if ((1 << ((byte)DAT_141dda754 & 0x1f) & 0x46U) == 0) {
        local_f8 = CONCAT44(DAT_141dda748._4_4_,(undefined4)DAT_141dda748);
      }
      else {
        FUN_1400419b0(&local_f8,&DAT_141dda748);
      }
      iVar1 = FUN_140e851f0(&local_e8,&local_f8,DAT_141955260,0);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      uVar2 = 1 << ((byte)local_fc & 0x1f);
      if (iVar1 == 0) {
        local_c8 = 0x3b1;
        if ((uVar2 & 0x46) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7c18);
        FUN_140e87440(uVar3,DAT_141a0a9a8,0x80000000,&local_90,uVar11 & 0xffffffffffffff00,
                      (ulonglong)ppuVar10 & 0xffffffffffffff00);
        if (((int)local_50[0] < 1) || (puVar7 = (undefined8 *)*local_48, puVar7 != &local_c0)) {
          local_f8 = *puVar7;
          uStack_f0 = *(undefined4 *)(puVar7 + 1);
          uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          FUN_140041b80(&local_c0,&local_f8);
        }
        puVar7 = &local_90;
      }
      else {
        local_c8 = 0x3ac;
        if ((uVar2 & 0x46) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7c18);
        FUN_140e87440(uVar3,DAT_141a07778,0x80000000,&local_70,uVar11 & 0xffffffffffffff00,
                      (ulonglong)ppuVar10 & 0xffffffffffffff00);
        uVar3 = FUN_140069500(uVar3);
        uVar11 = 0;
        puVar5 = &local_70;
        FUN_140e63610(uVar3,param_2,&local_108,0,puVar5,0);
        local_c8 = 0x3ad;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7c18);
        FUN_140e87440(uVar3,DAT_141a0a9a8,0x80000000,&local_90,
                      (ulonglong)puVar5 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
        if (((int)local_50[0] < 1) || (puVar7 = (undefined8 *)*local_48, puVar7 != &local_c0)) {
          local_f8 = *puVar7;
          uStack_f0 = *(undefined4 *)(puVar7 + 1);
          uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          FUN_140041b80(&local_c0,&local_f8);
        }
        local_a0 = &local_c0;
        uVar3 = FUN_140069500(uVar3);
        ppuVar10 = &local_a0;
        puVar7 = &local_90;
        FUN_140e63610(uVar3,param_2,&local_108,1,puVar7,ppuVar10);
        local_c8 = 0x3ae;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_80,
                      (ulonglong)puVar7 & 0xffffffffffffff00,
                      (ulonglong)ppuVar10 & 0xffffffffffffff00);
        local_f8 = CONCAT44(DAT_141dda748._4_4_,(undefined4)DAT_141dda748);
        uStack_f0 = DAT_141dda750;
        uStack_ec = DAT_141dda754;
        if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_f8);
        puVar7 = &local_80;
      }
      local_a0 = &local_c0;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_108,1,puVar7,&local_a0);
      goto LAB_140bed7df;
    }
  }
  local_c8 = 0x3a8;
LAB_140bed7df:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(&local_c0,0x10,2,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar7 = local_48;
    do {
      puVar5 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

