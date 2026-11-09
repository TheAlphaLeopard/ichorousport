// gml_GlobalScript_BOSSMODSINIT @ 0x140235480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_BOSSMODSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar10;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_120 = "gml_Script_remove_blood_letter";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x18;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,2,param_5);
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x18;
  uVar6 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_80[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_118 = 0x18;
    if ((int)local_88[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_80[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x403e000000000000;
  }
  local_118 = 0x1a;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_14c = 6;
  local_158 = local_res8;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_e8,uVar8,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  local_158 = local_res8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_f8,uVar8,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_148 = local_e8;
  uStack_140 = uStack_e0;
  uStack_13c = uStack_dc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_78 = local_d8;
  local_148 = local_f8;
  uStack_140 = uStack_f0;
  uStack_13c = uStack_ec;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_70 = local_c8;
  local_148 = CONCAT44(uRam0000000141dcde2c,_DAT_141dcde28);
  uStack_140 = uRam0000000141dcde30;
  uStack_13c = DAT_141dcde34;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_68 = local_b8;
  uStack_13c = 0xf;
  local_148 = 0x100000000000010;
  local_158 = (longlong *)0x100000000000010;
  uStack_150 = uStack_140;
  uStack_14c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_158);
  local_60 = local_a8;
  ppuVar10 = &local_78;
  uVar8 = CONCAT44(uVar9,DAT_141a0a7c8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_138,4,uVar8,ppuVar10);
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_118 = 0x1c;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1dce0);
      uStack_13c = 0xf;
      local_148 = 0x100000000000106;
      ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_141a1d7d0,0x80000000,&local_110,uVar8,ppuVar10);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140e609c0(local_res8);
      if ((int)local_88[0] < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*local_80;
      }
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_158 = (longlong *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_158);
      }
      FUN_140042560(&local_158,&local_110);
      if (&local_158 != puVar4) {
        local_98 = (undefined4)local_158;
        uStack_94 = local_158._4_4_;
        uStack_90 = uStack_150;
        uStack_8c = uStack_14c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_98);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140e60910(1);
      local_118 = 0x1d;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1d8a0);
      FUN_140e609c0(local_res8);
      if ((int)local_88[0] < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)local_80[1];
      }
      if (puVar5 != puVar4) {
        local_98 = *(undefined4 *)puVar5;
        uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_90 = *(undefined4 *)(puVar5 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_98);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar4 = local_80;
    do {
      puVar5 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

