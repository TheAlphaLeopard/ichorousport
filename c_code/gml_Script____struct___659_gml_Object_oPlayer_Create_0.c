// gml_Script____struct___659_gml_Object_oPlayer_Create_0 @ 0x140c13ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___659_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_140 = "gml_Script_anon@26846@___struct___659@gml_Object_oPlayer_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x574;
  _eh_vector_constructor_iterator_(&local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_16c = 0;
  local_178 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x576;
  local_130 = puVar6;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_150 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = (undefined8 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_158,puVar7);
  }
  FUN_140042560(&local_158,puVar6);
  FUN_1400460e0(uVar8,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_138 = 0x577;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_14c = 0;
  local_158 = (undefined8 *)0x0;
  iVar4 = FUN_140e851f0(puVar7,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  bVar2 = false;
  bVar1 = true;
  if (!(iVar4 == -2 || -1 < iVar4)) {
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_168 = (longlong *)CONCAT44(uRam00000001419ece14,_DAT_1419ece10);
    uStack_160 = uRam00000001419ece18;
    uStack_15c = uRam00000001419ece1c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_168);
    local_98 = &local_d8;
    local_168 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_160 = DAT_1419df7b8;
    uStack_15c = DAT_1419df7bc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_168);
    local_90 = local_c8;
    uVar8 = gml_Script_InputCheckMany(param_1,param_2,&local_178,2,&local_98);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 == '\0') {
      local_138 = 0x577;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      local_110 = 0;
      local_108 = 0;
      local_104 = 5;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef9a8);
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if (puVar7 != &local_b8) {
        local_168 = (longlong *)*puVar7;
        uStack_160 = *(undefined4 *)(puVar7 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_168);
      }
      local_88 = &local_b8;
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_158 = (undefined8 *)*puVar6;
      }
      else {
        FUN_1400419b0(&local_158,puVar6);
      }
      uStack_15c = 0;
      local_168 = (longlong *)0x4004000000000000;
      FUN_140046500(&local_158,&local_168);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = local_158;
      uStack_160 = uStack_150;
      uStack_15c = uStack_14c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_168);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_80 = local_a8;
      FUN_140e609c0(param_1);
      puVar6 = (undefined8 *)FUN_140e79090(&local_110,2,&local_88);
      if (puVar6 != puVar9) {
        local_168 = (longlong *)*puVar6;
        uStack_160 = *(undefined4 *)(puVar6 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar9);
        }
        FUN_140041b80(puVar9,&local_168);
      }
      FUN_140e60910(1);
      puVar6 = local_130;
    }
  }
  local_138 = 0x579;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
  uVar13 = 0;
  uVar8 = FUN_140e63610(param_1,param_2,&local_178,0,uVar10,0);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_15c = 0;
    local_168 = (undefined8 *)0x0;
    uVar5 = FUN_140e851f0(puVar7,&local_168,DAT_141955260,1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (uVar5 < 0x80000000) {
      local_138 = 0x57b;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
      uStack_15c = 0;
      local_168 = (longlong *)0x0;
      iVar4 = FUN_140e851f0(uVar8,&local_168,DAT_141955260,0);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if (iVar4 == 0) {
        uStack_124 = DAT_141dda824;
        uStack_128 = DAT_141dda820;
        if ((1 << ((byte)DAT_141dda824 & 0x1f) & 0x46U) == 0) {
          local_130 = DAT_141dda818;
        }
        else {
          FUN_1400419b0(&local_130,&DAT_141dda818);
        }
        ppuVar11 = &local_130;
        bVar2 = true;
        bVar1 = false;
      }
      else {
        uStack_14c = DAT_141dda554;
        uStack_150 = DAT_141dda550;
        if ((1 << ((byte)DAT_141dda554 & 0x1f) & 0x46U) == 0) {
          local_158 = DAT_141dda548;
        }
        else {
          FUN_1400419b0(&local_158,&DAT_141dda548);
        }
        ppuVar11 = &local_158;
      }
      local_168 = *ppuVar11;
      uStack_160 = *(undefined4 *)(ppuVar11 + 1);
      uStack_15c = *(undefined4 *)((longlong)ppuVar11 + 0xc);
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      FUN_140041b80(&local_f0,&local_168);
      if ((bVar1) && ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_158);
      }
      if ((bVar2) && ((1 << ((byte)uStack_124 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_130);
      }
      local_138 = 0x57c;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_68,uVar10 & 0xffffffffffffff00,
                    uVar13 & 0xffffffffffffff00);
      local_98 = &local_f0;
      uVar8 = FUN_140069500(uVar8);
      ppuVar11 = &local_98;
      puVar6 = &local_68;
      FUN_140e63610(uVar8,param_2,&local_178,1,puVar6,ppuVar11);
      local_138 = 0x57d;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
      FUN_140e87440(uVar8,DAT_1419f7b28,0x80000000,&local_78,(ulonglong)puVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00);
      local_98 = &local_f0;
      uVar8 = FUN_140069500(uVar8);
      FUN_140e63610(uVar8,param_2,&local_178,1,&local_78,&local_98);
      local_138 = 0x57f;
      goto LAB_140c14b05;
    }
  }
  local_138 = 0x584;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_168 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_160 = DAT_1419df7b8;
  uStack_15c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_168);
  local_98 = &local_d8;
  local_168 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_160 = DAT_1419df7b8;
  uStack_15c = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_168);
  local_90 = local_c8;
  ppuVar11 = &local_98;
  uVar8 = gml_Script_animcurve_lerp(param_1,param_2,&local_178,2,ppuVar11);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    local_138 = 0x586;
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_114 = 0;
    local_120 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_120);
    local_138 = 0x587;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_f4 = 0;
    local_100 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_100);
  }
  local_138 = 0x58b;
  uStack_15c = 6;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_141a0a818,0x80000000,&local_58,
                (ulonglong)ppuVar11 & 0xffffffffffffff00,uVar13 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 0;
  local_168 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(&local_58,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar4 != 0) {
    local_138 = 0x58c;
    if (puVar6 != &local_120) {
      local_168 = (longlong *)*puVar6;
      uStack_160 = *(undefined4 *)(puVar6 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      FUN_140041b80(&local_120,&local_168);
    }
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_120);
  }
  local_138 = 0x58e;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8198);
  FUN_140e63610(param_1,param_2,&local_178,0,uVar8,0);
  local_138 = 0x58f;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
  ppuVar11 = (undefined8 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uStack_15c = 0;
  local_168 = (undefined8 *)0x0;
  iVar4 = FUN_140e851f0(puVar6,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar4 == 0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_158 = (undefined8 *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_158,puVar6);
    }
    ppuVar12 = &local_158;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_124 = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_128 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_124 & 0x1f) & 0x46U) == 0) {
      local_130 = (undefined8 *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_130,puVar6);
    }
    ppuVar12 = &local_130;
    bVar2 = true;
    bVar1 = false;
  }
  FUN_140e609c0(param_1);
  if (ppuVar12 != ppuVar11) {
    local_168 = *ppuVar12;
    uStack_160 = *(undefined4 *)(ppuVar12 + 1);
    uStack_15c = *(undefined4 *)((longlong)ppuVar12 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar11);
    }
    FUN_140041b80(ppuVar11,&local_168);
  }
  if ((bVar1) && ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if ((bVar2) && ((1 << ((byte)uStack_124 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_130);
  }
  FUN_140e60910(1);
  local_138 = 0x591;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8098);
  FUN_140e63610(param_1,param_2,&local_178,0,uVar8,0);
  local_138 = 0x592;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8828);
  uVar8 = FUN_140e63610(param_1,param_2,&local_178,0,uVar8,0);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    local_138 = 0x595;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_178,0,uVar8,0);
    local_138 = 0x597;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    uVar13 = 0;
    FUN_140e63610(param_1,param_2,&local_178,0,uVar10,0);
    local_138 = 0x599;
    uStack_15c = 0;
    local_168 = (undefined8 *)0x0;
    iVar4 = FUN_140e851f0(puVar7,&local_168,DAT_141955260,1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (0 < iVar4) {
      local_138 = 0x59b;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_68,uVar10 & 0xffffffffffffff00,
                    uVar13 & 0xffffffffffffff00);
      local_168 = (longlong *)CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
      uStack_160 = DAT_141dda670;
      uStack_15c = DAT_141dda674;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_168);
      local_98 = &local_d8;
      uVar8 = FUN_140069500(uVar8);
      ppuVar11 = &local_98;
      puVar6 = &local_68;
      FUN_140e63610(uVar8,param_2,&local_178,1,puVar6,ppuVar11);
      local_138 = 0x59c;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
      FUN_140e87440(uVar8,DAT_1419f7b28,0x80000000,&local_78,(ulonglong)puVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00);
      local_168 = (longlong *)CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
      uStack_160 = DAT_141dda670;
      uStack_15c = DAT_141dda674;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_168);
      local_98 = &local_d8;
      uVar8 = FUN_140069500(uVar8);
      FUN_140e63610(uVar8,param_2,&local_178,1,&local_78,&local_98);
      local_138 = 0x59d;
    }
  }
  else {
    local_138 = 0x593;
  }
LAB_140c14b05:
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

