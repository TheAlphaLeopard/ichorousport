// gml_Script_anon_11442____struct___351_gml_Object_oBossEmbraceHalf_Create_0 @ 0x14076a430

undefined8 *
gml_Script_anon_11442____struct___351_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  double *pdVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar15;
  longlong *plVar14;
  ulonglong uVar16;
  longlong *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  uint uStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  double local_170;
  undefined4 local_168;
  uint local_164;
  double local_160;
  undefined4 local_158;
  uint local_154;
  undefined8 local_150;
  undefined4 local_144;
  double local_140;
  undefined4 local_138;
  uint local_134;
  double local_130;
  uint local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_180 = "gml_Script_anon@10701@gml_Object_oBossEmbraceHalf_Create_0";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x153;
  _eh_vector_constructor_iterator_(&local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_144 = 0xffffff;
  local_150 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_164 = 0xffffff;
  local_170 = 0.0;
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x154;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08108);
  puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_1c8,0,uVar4,0);
  uVar15 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar5 != &local_150) {
    local_198 = *(undefined4 *)puVar5;
    uStack_194 = *(uint *)((longlong)puVar5 + 4);
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(uint *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_198);
  }
  local_178 = 0x155;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_98 = &local_150;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar15,DAT_141a02ef8),&local_98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_178 = 0x155;
  }
  else {
    local_178 = 0x157;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07e48);
    uVar16 = 0;
    puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_1c8,0,uVar6,0);
    if (puVar5 != &local_e8) {
      local_198 = *(undefined4 *)puVar5;
      uStack_194 = *(uint *)((longlong)puVar5 + 4);
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(uint *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_198);
    }
    local_178 = 0x158;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    local_1dc = 6;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_160,uVar6,uVar16);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1dc = 6;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_170,uVar6 & 0xffffffffffffff00,
                  uVar16 & 0xffffffffffffff00);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e87170(&local_150,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
    plVar14 = param_1;
    FUN_140e87170(&local_150,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
    uVar15 = (undefined4)((ulonglong)plVar14 >> 0x20);
    uStack_1cc = local_154;
    uStack_1d0 = local_158;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_160;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_160);
    }
    FUN_1400460e0(&local_1d8,pdVar7);
    local_198 = (undefined4)local_1d8;
    uStack_194 = local_1d8._4_4_;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_198);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_98 = &local_d8;
    uStack_1cc = local_164;
    uStack_1d0 = local_168;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_170;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_170);
    }
    FUN_1400460e0(&local_1d8,puVar5);
    local_198 = (undefined4)local_1d8;
    uStack_194 = local_1d8._4_4_;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_198);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_90 = local_c8;
    local_198 = (undefined4)local_f8;
    uStack_194 = local_f8._4_4_;
    uStack_190 = uStack_f0;
    uStack_18c = uStack_ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_198);
    local_88 = local_b8;
    local_198 = (undefined4)local_108;
    uStack_194 = local_108._4_4_;
    uStack_190 = uStack_100;
    uStack_18c = uStack_fc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_198);
    local_80 = local_a8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_1c8,4,CONCAT44(uVar15,DAT_1419fd548),&local_98);
    uVar2 = FUN_140e851f0(uVar4,&local_e8,DAT_141955260,1);
    if (uVar2 < 0x80000000) {
      local_178 = 0x158;
    }
    else {
      local_178 = 0x15a;
      FUN_140e87170(&local_150,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
      plVar14 = param_1;
      FUN_140e87170(&local_150,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
      local_1dc = 6;
      param_2 = param_2 & 0xffffffffffffff00;
      uVar6 = (ulonglong)plVar14 & 0xffffffffffffff00;
      local_1e8 = param_1;
      FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_160,uVar6,param_2);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1dc = 6;
      local_1e8 = param_1;
      FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_170,uVar6 & 0xffffffffffffff00,
                    param_2 & 0xffffffffffffff00);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      dVar13 = local_170;
      if ((local_164 & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_170);
      }
      dVar10 = local_160;
      if ((local_154 & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_160);
      }
      dVar11 = local_108;
      if ((uStack_fc & 0xffffff) != 0) {
        dVar11 = (double)FUN_140e4b060(&local_108);
      }
      dVar12 = local_f8;
      if ((uStack_ec & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_f8);
      }
      fVar9 = (float)FUN_140e793d0((float)dVar12,(float)dVar11,(float)dVar10,(float)dVar13);
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      local_124 = 0;
      local_130 = (double)fVar9;
      local_178 = 0x15b;
      fVar9 = (float)FUN_140e78f90(0x3f800000,fVar9);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_19c = 0;
      local_1a8 = (longlong *)(double)fVar9;
      local_178 = 0x15c;
      dVar13 = local_130;
      if ((local_124 & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_130);
      }
      fVar9 = (float)FUN_140e79010(0x3f800000,(float)dVar13);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1ac = 0;
      local_1b8 = (longlong *)(double)fVar9;
      local_178 = 0x15d;
      local_1dc = *(undefined4 *)((longlong)puVar5 + 0xc);
      local_1e0 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = (longlong *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_1e8,puVar5);
      }
      FUN_140042560(&local_1e8,&local_1b8);
      local_134 = *(uint *)((longlong)pdVar7 + 0xc);
      local_138 = *(undefined4 *)(pdVar7 + 1);
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) == 0) {
        local_140 = *pdVar7;
      }
      else {
        FUN_1400419b0(&local_140,pdVar7);
      }
      FUN_140042560(&local_140,&local_1a8);
      uStack_1cc = local_134;
      uStack_1d0 = local_138;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_140;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_140);
      }
      FUN_1400460e0(&local_1d8,&local_1e8);
      dVar13 = local_1d8;
      if ((uStack_1cc & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_1d8);
      }
      local_198 = SUB84(dVar13,0);
      uStack_194 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
      uStack_18c = 0;
      uStack_70 = uStack_190;
      uStack_6c = 0;
      local_78 = local_198;
      uStack_74 = uStack_194;
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      FUN_140041b80(&local_120,&local_78);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_178 = 0x15e;
      local_1dc = 0;
      local_1e8 = (longlong *)0x0;
      iVar3 = FUN_140e851f0(&local_120,&local_1e8,DAT_141955260,1);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (0 < iVar3) {
        local_178 = 0x15f;
        (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        local_1dc = local_19c;
        local_1e0 = local_1a0;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_1a8;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_1a8);
        }
        FUN_140042560(&local_1e8,&local_120);
        FUN_1400460e0(uVar4,&local_1e8);
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_178 = 0x160;
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        local_1dc = local_1ac;
        local_1e0 = local_1b0;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_1b8);
        }
        FUN_140042560(&local_1e8,&local_120);
        FUN_1400460e0(uVar4,&local_1e8);
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
      }
      local_178 = 0x162;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07cd8);
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      local_1dc = local_19c;
      local_1e0 = local_1a0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_1a8);
      }
      FUN_140042560(&local_1e8,uVar4);
      FUN_1400460e0(uVar8,&local_1e8);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_178 = 0x163;
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      local_1dc = local_1ac;
      local_1e0 = local_1b0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_1b8);
      }
      FUN_140042560(&local_1e8,uVar4);
      FUN_1400460e0(uVar8,&local_1e8);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
    }
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

