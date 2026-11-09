// gml_Script_anon_5629_DefineTrinkets_TRINKETSINIT @ 0x1405e3c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5629_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar6;
  longlong *plVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffea0;
  ulonglong uVar10;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_100 = "gml_Script_anon@5077@DefineTrinkets@TRINKETSINIT";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0xb3;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0xb5;
  local_158 = CONCAT44(uRam00000001419e6a34,_DAT_1419e6a30);
  uStack_150 = uRam00000001419e6a38;
  uStack_14c = uRam00000001419e6a3c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_158);
  local_70 = local_a8;
  ppuVar6 = &local_70;
  uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_148,1,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_f8 = 0xb7;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_128,(ulonglong)ppuVar6 & 0xffffffffffffff00
                  ,in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    local_158 = local_128;
    uStack_150 = uStack_120;
    uStack_14c = uStack_11c;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_f8 = 0xb8;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    FUN_140e87170(&local_138,DAT_1419fe0e8,0x80000000,&local_d8,local_res8,local_res10);
    plVar7 = local_res8;
    FUN_140e87170(&local_138,DAT_1419fe158,0x80000000,&local_e8,local_res8,local_res10);
    uVar9 = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_158 = local_d8;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_158);
    local_78 = local_b8;
    local_158 = local_e8;
    uStack_150 = uStack_e0;
    uStack_14c = uStack_dc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_158);
    local_70 = local_a8;
    local_158 = CONCAT44(uRam0000000141dd4d7c,_DAT_141dd4d78);
    uStack_150 = uRam0000000141dd4d80;
    uStack_14c = DAT_141dd4d84;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_158);
    local_68 = local_98;
    uStack_14c = 0xf;
    local_158 = 0x100000000000087;
    local_c8 = 0x87;
    uStack_c4 = 0x1000000;
    uStack_c0 = uStack_150;
    uStack_bc = 0xf;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_c8);
    ppuVar6 = &local_78;
    uVar8 = CONCAT44(uVar9,DAT_141a0a7c8);
    local_60 = local_88;
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_148,4,uVar8,ppuVar6);
    iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_f8 = 0xba;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ffd18);
        if (param_4 < 1) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)*param_5;
        }
        uVar10 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_128,uVar8,uVar10);
        FUN_140e609c0(local_res8);
        if (&local_128 != puVar4) {
          local_c8 = (undefined4)local_128;
          uStack_c4 = local_128._4_4_;
          uStack_c0 = uStack_120;
          uStack_bc = uStack_11c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_c8);
        }
        FUN_140e60910(1);
        local_f8 = 0xbb;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
        if (param_4 < 1) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)*param_5;
        }
        ppuVar6 = (undefined1 **)(uVar10 & 0xffffffffffffff00);
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_118,uVar8,ppuVar6);
        FUN_140e609c0(local_res8);
        if (&local_118 != puVar4) {
          local_c8 = (undefined4)local_118;
          uStack_c4 = local_118._4_4_;
          uStack_c0 = uStack_110;
          uStack_bc = uStack_10c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_c8);
        }
        FUN_140e60910(1);
        cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_58,&local_res8,&local_res10);
    if (local_48 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

