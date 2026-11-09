// gml_Script_anon_3052_gml_Object_oBossHoarder_Other_76 @ 0x14079d210

undefined8 *
gml_Script_anon_3052_gml_Object_oBossHoarder_Other_76
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffe90;
  undefined1 **ppuVar10;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_100 = "gml_Script_anon@2511@gml_Object_oBossHoarder_Other_76";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x7b;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x7d;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
  FUN_140e609c0(local_res8);
  uStack_14c = 0;
  local_158 = (longlong *)0xc000000000000000;
  local_res18 = 1;
  FUN_140042560(&local_158,uVar3);
  if (&local_158 != puVar4) {
    local_168 = local_158;
    uStack_160 = uStack_150;
    uStack_15c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(1);
  local_f8 = 0x7e;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_15c = 6;
  local_168 = local_res8;
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_118,uVar8,in_stack_fffffffffffffe90);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  local_168 = local_res8;
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_128,uVar8,in_stack_fffffffffffffe90);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  local_168 = local_res8;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_141a1b910,0x80000000,&local_d8,uVar8,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 0;
  local_168 = (longlong *)0x4024000000000000;
  local_res18 = 2;
  FUN_140042560(&local_168,uVar3);
  uStack_14c = local_10c;
  uStack_150 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_158 = local_118;
  }
  else {
    FUN_1400419b0(&local_158,&local_118);
  }
  local_res18 = 6;
  FUN_1400460e0(&local_158,&local_168);
  local_148 = (undefined4)local_158;
  uStack_144 = local_158._4_4_;
  uStack_140 = uStack_150;
  uStack_13c = uStack_14c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_res18 = 2;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_res18 = 0;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_88 = local_c8;
  uStack_14c = local_11c;
  uStack_150 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_158 = local_128;
  }
  else {
    FUN_1400419b0(&local_158,&local_128);
  }
  local_res18 = 8;
  uStack_15c = 7;
  local_168 = (longlong *)CONCAT44(local_168._4_4_,10);
  FUN_1400462a0(&local_158,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_148 = (undefined4)local_158;
  uStack_144 = local_158._4_4_;
  uStack_140 = uStack_150;
  uStack_13c = uStack_14c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_80 = local_b8;
  local_148 = (undefined4)local_d8;
  uStack_144 = local_d8._4_4_;
  uStack_140 = uStack_d0;
  uStack_13c = uStack_cc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_78 = local_a8;
  uStack_15c = 0xf;
  local_168 = (longlong *)0x100000000000121;
  local_148 = 0x121;
  uStack_144 = 0x1000000;
  uStack_140 = uStack_160;
  uStack_13c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_148);
  ppuVar10 = &local_88;
  uVar8 = CONCAT44(uVar9,DAT_141a0a7c8);
  local_70 = local_98;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_138,4,uVar8,ppuVar10);
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
      local_f8 = 0x80;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
      puVar5 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
      FUN_140e609c0(local_res8);
      if (puVar5 != puVar6) {
        local_148 = *puVar5;
        uStack_144 = puVar5[1];
        uStack_140 = puVar5[2];
        uStack_13c = puVar5[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_148);
      }
      FUN_140e60910(1);
      local_f8 = 0x81;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
      uStack_15c = 6;
      local_168 = local_res10;
      ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_168,DAT_141a0a828,0x80000000,&local_e8,uVar8,ppuVar10);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140e609c0(local_res8);
      if (&local_e8 != puVar4) {
        local_148 = (undefined4)local_e8;
        uStack_144 = local_e8._4_4_;
        uStack_140 = uStack_e0;
        uStack_13c = uStack_dc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_148);
      }
      FUN_140e60910(1);
      local_f8 = 0x83;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      FUN_140e609c0(local_res8);
      uStack_14c = 0;
      local_158 = (longlong *)0x4018000000000000;
      local_res18 = 0x10;
      FUN_140042560(&local_158,puVar5);
      if (&local_158 != puVar4) {
        local_148 = (undefined4)local_158;
        uStack_144 = local_158._4_4_;
        uStack_140 = uStack_150;
        uStack_13c = uStack_14c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_148);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140e60910(1);
      local_f8 = 0x84;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0xc018000000000000;
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

