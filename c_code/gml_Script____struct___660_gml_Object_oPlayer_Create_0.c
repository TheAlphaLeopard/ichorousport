// gml_Script____struct___660_gml_Object_oPlayer_Create_0 @ 0x140c15360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___660_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  undefined1 **ppuVar19;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  longlong *local_180;
  undefined4 local_178;
  uint local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  longlong *local_130;
  undefined4 local_128;
  uint local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  
  local_1a0 = "gml_Script_anon@27800@___struct___660@gml_Object_oPlayer_Create_0";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x5b5;
  _eh_vector_constructor_iterator_(&local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_124 = 0xffffff;
  local_130 = (longlong *)0x0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1cc = 0;
  local_1d8 = 0;
  local_144 = 0;
  local_150 = 0;
  local_154 = 0;
  local_160 = 0;
  local_164 = 0;
  local_170 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x5b7;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8778);
  uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_198 = 0x5ba;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8828);
    uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') {
      local_198 = 0x5bd;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
      uVar18 = 0;
      uVar7 = FUN_140e63610(param_1,param_2,&local_1d8,0,uVar8,0);
      cVar3 = FUN_140e491e0(uVar7);
      if (cVar3 != '\0') {
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
        uStack_1dc = 0;
        local_1e8 = (longlong *)0x0;
        uVar4 = FUN_140e851f0(uVar7,&local_1e8,DAT_141955260,1);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if (uVar4 < 0x80000000) {
          local_198 = 0x5bf;
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_150);
          }
          local_150 = 0;
          local_148 = 0;
          local_144 = 5;
          if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_160);
          }
          local_160 = 0;
          local_158 = 0;
          local_154 = 5;
          if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_170);
          }
          local_170 = 0;
          local_168 = 0;
          local_164 = 5;
          uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8458);
          uStack_1dc = 6;
          uVar18 = uVar18 & 0xffffffffffffff00;
          uVar8 = uVar8 & 0xffffffffffffff00;
          local_1e8 = param_1;
          FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_e8,uVar8,uVar18);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          uStack_1dc = 6;
          uVar8 = uVar8 & 0xffffffffffffff00;
          local_1e8 = param_1;
          FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_130,uVar8,
                        uVar18 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar8 >> 0x20);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x1000001000003f0;
          local_1e8 = (longlong *)0x1000001000003f0;
          uStack_1e0 = uStack_1c0;
          uStack_1dc = 0xf;
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          FUN_140041b80(&local_a8,&local_1e8);
          local_d8 = &local_a8;
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x1000001000003f0;
          local_1e8 = (longlong *)0x1000001000003f0;
          uStack_1e0 = uStack_1c0;
          uStack_1dc = 0xf;
          if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_1e8);
          local_d0 = local_98;
          local_1c8 = (longlong *)local_e8;
          uStack_1c0 = uStack_e0;
          uStack_1bc = uStack_dc;
          if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_88);
          }
          FUN_140041b80(local_88,&local_1c8);
          local_c8 = local_88;
          uVar16 = CONCAT44(uVar14,DAT_1419f7058);
          uVar7 = FUN_140e634e0(param_1,param_2,&local_160,1,uVar16,&local_d8);
          uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
          uStack_1ac = local_124;
          uStack_1b0 = local_128;
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
            local_1b8 = local_130;
          }
          else {
            FUN_1400419b0(&local_1b8,&local_130);
          }
          FUN_1400460e0(&local_1b8,uVar7);
          uVar7 = FUN_140e634e0(param_1,param_2,&local_170,1,CONCAT44(uVar14,DAT_141a04768),
                                &local_d0);
          local_174 = uStack_1ac;
          local_178 = uStack_1b0;
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
            local_180 = local_1b8;
          }
          else {
            FUN_1400419b0(&local_180,&local_1b8);
          }
          FUN_1400462a0(&local_180,uVar7);
          uStack_1dc = local_174;
          uStack_1e0 = local_178;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
            local_1e8 = local_180;
          }
          else {
            FUN_1400419b0(&local_1e8,&local_180);
          }
          uStack_1bc = 7;
          bVar2 = false;
          bVar1 = true;
          local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,2);
          FUN_1400460e0(&local_1e8,&local_1c8);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          local_1c8 = local_1e8;
          uStack_1c0 = uStack_1e0;
          uStack_1bc = uStack_1dc;
          if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_78);
          }
          FUN_140041b80(local_78,&local_1c8);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_c0 = local_78;
          local_1c8 = (longlong *)CONCAT44(uRam0000000141dda77c,_DAT_141dda778);
          uStack_1c0 = uRam0000000141dda780;
          uStack_1bc = DAT_141dda784;
          if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_68);
          }
          FUN_140041b80(local_68,&local_1c8);
          local_b8 = local_68;
          ppuVar19 = &local_c8;
          FUN_140e63610(param_1,param_2,&local_150,3,uVar9,ppuVar19);
          local_198 = 0x5c1;
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
          uStack_1bc = 0;
          local_1c8 = (longlong *)0x0;
          iVar5 = FUN_140e851f0(uVar7,&local_1c8,DAT_141955260,0);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          if (iVar5 == 0) {
            uStack_1ac = DAT_141dda824;
            uStack_1b0 = DAT_141dda820;
            if ((1 << ((byte)DAT_141dda824 & 0x1f) & 0x46U) == 0) {
              local_1b8 = DAT_141dda818;
            }
            else {
              FUN_1400419b0(&local_1b8,&DAT_141dda818);
            }
            pplVar11 = &local_1b8;
            bVar2 = true;
            bVar1 = false;
          }
          else {
            uStack_1dc = DAT_141dda554;
            uStack_1e0 = DAT_141dda550;
            if ((1 << ((byte)DAT_141dda554 & 0x1f) & 0x46U) == 0) {
              local_1e8 = DAT_141dda548;
            }
            else {
              FUN_1400419b0(&local_1e8,&DAT_141dda548);
            }
            pplVar11 = &local_1e8;
          }
          local_1c8 = *pplVar11;
          uStack_1c0 = *(undefined4 *)(pplVar11 + 1);
          uStack_1bc = *(undefined4 *)((longlong)pplVar11 + 0xc);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          FUN_140041b80(&local_140,&local_1c8);
          if ((bVar1) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_1e8);
          }
          if ((bVar2) && ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_1b8);
          }
          local_198 = 0x5c2;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
          FUN_140e87440(uVar7,DAT_141a55540,0x80000000,&local_100,uVar9 & 0xffffffffffffff00,
                        (ulonglong)ppuVar19 & 0xffffffffffffff00);
          local_d8 = &local_140;
          uVar7 = FUN_140069500(uVar7);
          ppuVar17 = &local_d8;
          puVar6 = &local_100;
          FUN_140e63610(uVar7,param_2,&local_1d8,1,puVar6,ppuVar17);
          local_198 = 0x5c3;
          uStack_1dc = DAT_141dda554;
          uStack_1e0 = DAT_141dda550;
          if ((1 << ((byte)DAT_141dda554 & 0x1f) & 0x46U) == 0) {
            local_1e8 = DAT_141dda548;
          }
          else {
            FUN_1400419b0(&local_1e8,&DAT_141dda548);
          }
          iVar5 = FUN_140e851f0(&local_140,&local_1e8,DAT_141955260,0);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if (iVar5 == 0) {
            local_198 = 0x5c4;
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1d8 = 0;
            local_1d0 = 0;
            local_1cc = 5;
            uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
            FUN_140e87440(uVar7,DAT_1419f7b28,0x80000000,&local_110,
                          (ulonglong)puVar6 & 0xffffffffffffff00,
                          (ulonglong)ppuVar17 & 0xffffffffffffff00);
            local_d8 = &local_140;
            uVar7 = FUN_140069500(uVar7);
            FUN_140e63610(uVar7,param_2,&local_1d8,1,&local_110,&local_d8);
          }
          local_198 = 0x5c6;
          goto LAB_140c16478;
        }
      }
      local_198 = 0x5ca;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_1c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1c0 = DAT_1419df7b8;
      uStack_1bc = DAT_1419df7bc;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_1c8);
      local_d8 = &local_a8;
      local_1c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1c0 = DAT_1419df7b8;
      uStack_1bc = DAT_1419df7bc;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1c8);
      local_d0 = local_98;
      ppuVar17 = &local_d8;
      uVar7 = gml_Script_animcurve_lerp(param_1,param_2,&local_1d8,2,ppuVar17);
      cVar3 = FUN_140e491e0(uVar7);
      if (cVar3 != '\0') {
        local_198 = 0x5cc;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_184 = 0;
        local_190 = 0;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_190);
      }
      local_198 = 0x5d0;
      uStack_1bc = 6;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_141a0a818,0x80000000,&local_120,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00,uVar18 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1bc = 0;
      local_1c8 = (longlong *)0x0;
      iVar5 = FUN_140e851f0(&local_120,&local_1c8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if (iVar5 != 0) {
        local_198 = 0x5d1;
        if (puVar6 != &local_190) {
          local_1c8 = (longlong *)*puVar6;
          uStack_1c0 = *(undefined4 *)(puVar6 + 1);
          uStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_190);
          }
          FUN_140041b80(&local_190,&local_1c8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_190);
      }
      local_198 = 0x5d3;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8198);
      FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
      local_198 = 0x5d4;
      puVar10 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
      pplVar11 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
      uStack_1bc = 0;
      local_1c8 = (longlong *)0x0;
      iVar5 = FUN_140e851f0(puVar10,&local_1c8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if (iVar5 == 0) {
        puVar10 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
        uStack_1dc = *(uint *)((longlong)puVar10 + 0xc);
        uStack_1e0 = (undefined4)puVar10[1];
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
          local_1e8 = (longlong *)*puVar10;
        }
        else {
          FUN_1400419b0(&local_1e8,puVar10);
        }
        pplVar13 = &local_1e8;
        bVar2 = false;
        bVar1 = true;
      }
      else {
        uStack_1ac = *(uint *)((longlong)puVar10 + 0xc);
        uStack_1b0 = (undefined4)puVar10[1];
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
          local_1b8 = (longlong *)*puVar10;
        }
        else {
          FUN_1400419b0(&local_1b8,puVar10);
        }
        pplVar13 = &local_1b8;
        bVar2 = true;
        bVar1 = false;
      }
      FUN_140e609c0(param_1);
      if (pplVar13 != pplVar11) {
        local_1c8 = *pplVar13;
        uStack_1c0 = *(undefined4 *)(pplVar13 + 1);
        uStack_1bc = *(undefined4 *)((longlong)pplVar13 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar11);
        }
        FUN_140041b80(pplVar11,&local_1c8);
      }
      if ((bVar1) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1e8);
      }
      if ((bVar2) && ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140e60910(1);
      local_198 = 0x5d6;
      puVar10 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      uStack_1dc = *(undefined4 *)((longlong)puVar10 + 0xc);
      uStack_1e0 = (undefined4)puVar10[1];
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = (longlong *)*puVar10;
      }
      else {
        FUN_1400419b0(&local_1e8,puVar10);
      }
      FUN_140042560(&local_1e8,puVar6);
      FUN_1400460e0(puVar12,&local_1e8);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_198 = 0x5d7;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar10 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef898);
      uVar4 = *(uint *)((longlong)puVar10 + 0xc);
      if ((uVar4 & 0xffffff) == 0) {
        uVar8 = *puVar10;
      }
      else {
        uVar8 = FUN_140e4b060(puVar10);
        uVar4 = *(uint *)((longlong)puVar10 + 0xc);
      }
      uVar14 = (undefined4)uVar8;
      uStack_1dc = 0;
      local_1e8 = (longlong *)(uVar8 ^ 0x8000000000000000);
      if ((uVar4 & 0xffffff) == 0) {
        uVar8 = *puVar10;
      }
      else {
        uVar8 = FUN_140e4b060(puVar10);
        uVar14 = SUB84(local_1e8,0);
      }
      if ((uStack_1dc & 0xffffff) != 0) {
        uVar14 = FUN_140e4b060(&local_1e8);
      }
      if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
        uVar15 = (undefined4)*puVar6;
      }
      else {
        uVar15 = FUN_140e4b060(puVar6);
      }
      uVar7 = FUN_140e78ec0(uVar15,uVar14,uVar8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
      *puVar12 = uVar7;
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_198 = 0x5d9;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
      FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
      local_198 = 0x5da;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
      FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
      local_198 = 0x5db;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8098);
      FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
    }
    else {
      local_198 = 0x5bb;
    }
  }
  else {
    local_198 = 0x5b8;
  }
LAB_140c16478:
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

