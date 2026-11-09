// gml_Script_anon_3364_SnowState_SnowState @ 0x1404f31a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3364_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  uint local_res8;
  undefined4 uVar11;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  undefined4 local_114;
  uint local_110;
  longlong local_108;
  uint uStack_fc;
  undefined8 local_f8 [4];
  undefined4 local_d8 [4];
  undefined4 local_c8 [4];
  undefined4 local_b8 [4];
  undefined1 local_a8 [16];
  undefined4 local_98 [4];
  undefined8 *local_88;
  longlong *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  
  local_160 = "gml_Script_anon@2303@SnowState@SnowState";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x42;
  _eh_vector_constructor_iterator_(local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_144 = 0xffffff;
  local_150 = 0;
  local_res8 = 0xffffff;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fcfc8);
  local_124 = 0;
  local_130 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x45;
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc08);
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1404f32e2:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_178);
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
    if (puVar6 != local_f8) goto LAB_1404f32e2;
  }
  local_88 = local_f8;
  puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_1a8,1,uVar5,&local_88);
  if (puVar6 != &local_150) {
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_178);
  }
  local_158 = 0x46;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
  if (param_4 < 1) {
    FUN_140e98ef0(param_1,param_2,uVar5,&DAT_1419df7b0,&local_150);
LAB_1404f33d3:
    puVar6 = &DAT_1419df7b0;
  }
  else {
    FUN_140e98ef0(param_1,param_2,uVar5,*param_5,&local_150);
    if (param_4 < 3) goto LAB_1404f33d3;
    puVar6 = (undefined8 *)param_5[2];
  }
  local_158 = 0x49;
  cVar1 = FUN_140e491e0(puVar6);
  if (cVar1 == '\0') goto LAB_1404f3a1e;
  local_158 = 0x4b;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd078);
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1404f344f:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_178);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != local_f8) goto LAB_1404f344f;
  }
  local_88 = local_f8;
  FUN_140e63610(param_1,param_2,&local_1a8,1,uVar5,&local_88);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_158 = 0x4e;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1404f34fb:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_178);
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
    if (puVar6 != local_f8) goto LAB_1404f34fb;
  }
  local_88 = local_f8;
  uVar5 = CONCAT44(uVar11,DAT_141a063c8);
  plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar5,&local_88);
  lVar9 = 0;
  if (plVar7 != &local_108) {
    local_178 = (undefined4)*plVar7;
    uStack_174 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_170 = (undefined4)plVar7[1];
    uStack_16c = *(undefined4 *)((longlong)plVar7 + 0xc);
    FUN_140041b80(&local_108,&local_178);
    local_res8 = uStack_fc;
    lVar9 = local_108;
  }
  local_158 = 0x4f;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0.0;
  iVar10 = 0;
  if ((local_res8 == 2) && (lVar9 != 0)) {
    iVar10 = *(int *)(lVar9 + 0x24);
  }
  if (0 < iVar10) {
    local_110 = local_res8 & 0xffffff;
    do {
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      iVar10 = iVar10 + -1;
      local_158 = 0x50;
      iVar2 = FUN_140e4a740(&local_198);
      plVar7 = (longlong *)0x0;
      if ((local_110 == 2) && (lVar9 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar9 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                        *(undefined4 *)(lVar9 + 0x24));
        }
        else {
          plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar9 + 8));
        }
        if (plVar7 != &local_120) goto LAB_1404f3645;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar7 = &local_108;
LAB_1404f3645:
        local_188 = (undefined4)*plVar7;
        uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_180 = (undefined4)plVar7[1];
        uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_188);
      }
      local_158 = 0x51;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      local_130 = 0;
      local_128 = 0;
      local_124 = 5;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      local_140 = 0;
      local_138 = 0;
      local_134 = 5;
      puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcda8);
      if (param_4 < 2) {
        puVar6 = &DAT_1419df7b0;
LAB_1404f3727:
        local_188 = *(undefined4 *)puVar6;
        uStack_184 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_180 = *(undefined4 *)(puVar6 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_188);
      }
      else {
        puVar6 = (undefined8 *)param_5[1];
        if (puVar6 != local_f8) goto LAB_1404f3727;
      }
      local_88 = local_f8;
      local_80 = &local_120;
      if (puVar8 != local_d8) {
        local_188 = *puVar8;
        uStack_184 = puVar8[1];
        uStack_180 = puVar8[2];
        uStack_17c = puVar8[3];
        if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_188);
      }
      uVar5 = CONCAT44(uVar11,DAT_141a01138);
      local_78 = local_d8;
      puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_140,2,uVar5,&local_88);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar8 != local_c8) {
        local_188 = *puVar8;
        uStack_184 = puVar8[1];
        uStack_180 = puVar8[2];
        uStack_17c = puVar8[3];
        if ((1 << ((byte)local_c8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_188);
      }
      local_70 = local_c8;
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_178,gml_Script____struct___238_anon_3364_SnowState_SnowState,0);
      if (&local_178 != puVar4) {
        local_188 = local_178;
        uStack_184 = uStack_174;
        uStack_180 = uStack_170;
        uStack_17c = uStack_16c;
        if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_188);
      }
      FUN_140e60910(1);
      if (puVar4 != local_b8) {
        local_188 = *puVar4;
        uStack_184 = puVar4[1];
        uStack_180 = puVar4[2];
        uStack_17c = puVar4[3];
        if ((1 << ((byte)local_b8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_188);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_68 = local_b8;
      local_188 = _DAT_1419e5fb0;
      uStack_184 = uRam00000001419e5fb4;
      uStack_180 = uRam00000001419e5fb8;
      uStack_17c = uRam00000001419e5fbc;
      if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_188);
      local_60 = local_a8;
      uVar5 = CONCAT44(uVar11,DAT_1419fed78);
      puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_130,2,uVar5,&local_78);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar8 != local_98) {
        local_188 = *puVar8;
        uStack_184 = puVar8[1];
        uStack_180 = puVar8[2];
        uStack_17c = puVar8[3];
        if ((1 << ((byte)local_98[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_188);
      }
      local_58 = local_98;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_1a8,3,CONCAT44(uVar11,DAT_1419fd6d8),&local_68);
      FUN_140e98ef0(param_1,param_2,&local_150,&local_120,uVar5);
      local_158 = 0x55;
      uVar3 = local_18c & 0xffffff;
      if (uVar3 == 0) {
LAB_1404f39fe:
        local_198 = local_198 + 1.0;
      }
      else {
        if (uVar3 == 1) {
          local_198 = (double)FUN_140e4b060(&local_198);
          local_18c = 0;
          goto LAB_1404f39fe;
        }
        if (uVar3 == 7) {
          local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_198 = (double)((longlong)local_198 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_18c = 0;
            goto LAB_1404f39fe;
          }
          FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
        }
      }
    } while (0 < iVar10);
  }
LAB_1404f3a1e:
  puVar6 = &DAT_1419df7b0;
  local_158 = 0x5a;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc68);
  FUN_140e63610(param_1,param_2,&local_1a8,0,uVar5,0);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_158 = 0x5d;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf48);
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  iVar10 = FUN_140e851f0(puVar6,uVar5,DAT_141955260,0);
  if (iVar10 == 0) {
    local_158 = 0x5e;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf68);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_158 = 0x5f;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcbc8);
      FUN_140e609c0(param_1);
      puVar8 = (undefined4 *)
               FUN_140e634e0(param_1,param_2,&local_1a8,0,CONCAT44(uVar11,DAT_1419fca88),0);
      if (puVar8 != puVar4) {
        local_188 = *puVar8;
        uStack_184 = puVar8[1];
        uStack_180 = puVar8[2];
        uStack_17c = puVar8[3];
        if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_188);
      }
      FUN_140e60910(1);
      local_158 = 0x60;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcb58);
      FUN_140e63610(param_1,param_2,&local_1a8,0,uVar5,0);
    }
  }
  local_158 = 100;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

