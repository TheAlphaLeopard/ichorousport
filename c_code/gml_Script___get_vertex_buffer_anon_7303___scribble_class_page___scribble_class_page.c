// gml_Script___get_vertex_buffer_anon_7303___scribble_class_page___scribble_class_page @ 0x14015dbc0

undefined8 *
gml_Script___get_vertex_buffer_anon_7303___scribble_class_page___scribble_class_page
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  double *pdVar10;
  double *pdVar11;
  ulonglong uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined4 local_118 [3];
  byte local_10c;
  undefined4 local_108 [3];
  byte local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_b0 = "gml_Script___get_glyph_data@anon@5426@__scribble_class_page@__scribble_class_page";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x8d;
  FUN_140041df0(local_68,param_4,1,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,7,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a07648);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a074f8);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a07678);
  local_13c = 0;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x91;
  pdVar11 = (double *)&DAT_1419df7b0;
  uVar12 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_60;
  }
  uStack_19c = 0;
  local_1a8 = 0;
  iVar1 = FUN_140e851f0(puVar9,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_78 = local_e8;
  if (iVar1 != -2 && iVar1 < 0) {
    local_a8 = 0x93;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066a8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1a8,
                  gml_Script____struct___50___get_glyph_data_anon_5426___scribble_class_page___scribble_class_page
                  ,0);
    if (&local_1a8 != puVar4) {
      local_1b8 = (undefined4)local_1a8;
      uStack_1b4 = local_1a8._4_4_;
      uStack_1b0 = uStack_1a0;
      uStack_1ac = uStack_19c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1b8);
    }
    FUN_140e60910(1);
    if (puVar4 != &local_128) {
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1b8);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_98 = &local_128;
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_158,uVar2,0,1);
    if (puVar8 != local_118) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1b8);
    }
    local_90 = local_118;
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_168,uVar2,0,2);
    if (puVar8 != local_108) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1b8);
    }
    local_88 = local_108;
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_178,uVar2,0,1);
    if (puVar8 != local_f8) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1b8);
    }
    local_80 = local_f8;
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_188,uVar2,0,4);
    if (puVar8 != local_e8) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1b8);
    }
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_198,uVar2,0,5);
    if (puVar8 != local_d8) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1b8);
    }
    local_70 = local_d8;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_148,6,CONCAT44(uVar14,DAT_1419fd6d8),&local_98);
    if (puVar4 != param_3) {
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_1b8);
    }
    goto LAB_14015e87e;
  }
  local_a8 = 0x9c;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06818);
  uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar4);
  }
  uStack_1ac = 7;
  local_1b8 = 1;
  FUN_1400462a0(&local_1a8,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  uVar3 = FUN_140e851f0(puVar4,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (0x7fffffff < uVar3) {
    local_a8 = 0xab;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066a8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1b8,
                  gml_Script____struct___51___get_vertex_buffer_anon_7303___scribble_class_page___scribble_class_page
                  ,0);
    if ((undefined8 *)&local_1b8 != puVar6) {
      local_1a8 = CONCAT44(uStack_1b4,local_1b8);
      uStack_1a0 = uStack_1b0;
      uStack_19c = uStack_1ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
    if (puVar6 != &local_138) {
      local_1a8 = *puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1a8);
    }
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_a0 = &local_138;
    if ((int)local_68[0] < 1) {
      pdVar10 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar10 = (double *)*local_60;
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar10;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    uVar2 = FUN_140e4a740(uVar7);
    puVar4 = (undefined8 *)FUN_140ea8b20(&local_158,uVar2,(longlong)dVar13,0);
    if (puVar4 != &local_128) {
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1b8);
    }
    local_98 = &local_128;
    if ((int)local_68[0] < 1) {
      pdVar10 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar10 = (double *)*local_60;
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar10;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_168,uVar2,(longlong)dVar13,1);
    if (puVar8 != local_118) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1b8);
    }
    local_90 = local_118;
    if ((int)local_68[0] < 1) {
      pdVar10 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar10 = (double *)*local_60;
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar10;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_178,uVar2,(longlong)dVar13,2);
    if (puVar8 != local_108) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1b8);
    }
    local_88 = local_108;
    if ((int)local_68[0] < 1) {
      pdVar10 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar10 = (double *)*local_60;
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar10;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_188,uVar2,(longlong)dVar13,3);
    if (puVar8 != local_f8) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1b8);
    }
    local_80 = local_f8;
    if ((int)local_68[0] < 1) {
      pdVar10 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar10 = (double *)*local_60;
    }
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar10;
    }
    else {
      dVar13 = (double)FUN_140e4b060();
    }
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_198,uVar2,(longlong)dVar13,4);
    if (puVar8 != local_e8) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1b8);
    }
    if (0 < (int)local_68[0]) {
      pdVar11 = (double *)*local_60;
    }
    if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
      dVar13 = *pdVar11;
    }
    else {
      dVar13 = (double)FUN_140e4b060(pdVar11);
    }
    uVar2 = FUN_140e4a740(uVar7);
    puVar8 = (undefined4 *)FUN_140ea8b20(&local_c8,uVar2,(longlong)dVar13,5);
    if (puVar8 != local_d8) {
      local_1b8 = *puVar8;
      uStack_1b4 = puVar8[1];
      uStack_1b0 = puVar8[2];
      uStack_1ac = puVar8[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1b8);
    }
    local_70 = local_d8;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_148,7,CONCAT44(uVar14,DAT_1419fd6d8),&local_a0);
    if (puVar4 != param_3) {
      local_1b8 = *(undefined4 *)puVar4;
      uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1b0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_1b8);
    }
    goto LAB_14015e87e;
  }
  local_a8 = 0x9e;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06818);
  uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar4);
  }
  uStack_1ac = 7;
  local_1b8 = 2;
  FUN_1400462a0(&local_1a8,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14015e34f:
    local_1b8 = (undefined4)local_1a8;
    uStack_1b4 = local_1a8._4_4_;
    uStack_1b0 = uStack_1a0;
    uStack_1ac = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1b8);
  }
  else {
    puVar4 = (undefined8 *)*local_60;
    if (&local_1a8 != puVar4) goto LAB_14015e34f;
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_a8 = 0xa0;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066a8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1b8,
                gml_Script___get_glyph_data_anon_5426___scribble_class_page___scribble_class_page,0)
  ;
  if ((undefined8 *)&local_1b8 != puVar5) {
    local_1a8 = CONCAT44(uStack_1b4,local_1b8);
    uStack_1a0 = uStack_1b0;
    uStack_19c = uStack_1ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1a8);
  }
  FUN_140e60910(1);
  if (puVar5 != &local_138) {
    local_1a8 = *puVar5;
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1a8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_a0 = &local_138;
  if ((int)local_68[0] < 1) {
    pdVar10 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar10 = (double *)*local_60;
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar10;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  uVar2 = FUN_140e4a740(uVar7);
  puVar4 = (undefined8 *)FUN_140ea8b20(&local_158,uVar2,(longlong)dVar13,3);
  if (puVar4 != &local_128) {
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1b8);
  }
  local_98 = &local_128;
  if ((int)local_68[0] < 1) {
    pdVar10 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar10 = (double *)*local_60;
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar10;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  uVar2 = FUN_140e4a740(uVar7);
  puVar8 = (undefined4 *)FUN_140ea8b20(&local_168,uVar2,(longlong)dVar13,2);
  if (puVar8 != local_118) {
    local_1b8 = *puVar8;
    uStack_1b4 = puVar8[1];
    uStack_1b0 = puVar8[2];
    uStack_1ac = puVar8[3];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1b8);
  }
  local_90 = local_118;
  if ((int)local_68[0] < 1) {
    pdVar10 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar10 = (double *)*local_60;
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar10;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  uVar2 = FUN_140e4a740(uVar7);
  puVar8 = (undefined4 *)FUN_140ea8b20(&local_178,uVar2,(longlong)dVar13,3);
  if (puVar8 != local_108) {
    local_1b8 = *puVar8;
    uStack_1b4 = puVar8[1];
    uStack_1b0 = puVar8[2];
    uStack_1ac = puVar8[3];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1b8);
  }
  local_88 = local_108;
  if ((int)local_68[0] < 1) {
    pdVar10 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar10 = (double *)*local_60;
  }
  if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar10;
  }
  else {
    dVar13 = (double)FUN_140e4b060();
  }
  uVar2 = FUN_140e4a740(uVar7);
  puVar8 = (undefined4 *)FUN_140ea8b20(&local_188,uVar2,(longlong)dVar13,4);
  if (puVar8 != local_f8) {
    local_1b8 = *puVar8;
    uStack_1b4 = puVar8[1];
    uStack_1b0 = puVar8[2];
    uStack_1ac = puVar8[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
  }
  local_80 = local_f8;
  if (0 < (int)local_68[0]) {
    pdVar11 = (double *)*local_60;
  }
  if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
    dVar13 = *pdVar11;
  }
  else {
    dVar13 = (double)FUN_140e4b060(pdVar11);
  }
  uVar2 = FUN_140e4a740(uVar7);
  puVar8 = (undefined4 *)FUN_140ea8b20(&local_198,uVar2,(longlong)dVar13,5);
  if (puVar8 != local_e8) {
    local_1b8 = *puVar8;
    uStack_1b4 = puVar8[1];
    uStack_1b0 = puVar8[2];
    uStack_1ac = puVar8[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1b8);
  }
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_148,6,CONCAT44(uVar14,DAT_1419fd6d8),&local_a0);
  if (puVar4 != param_3) {
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1b8);
  }
LAB_14015e87e:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,7,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar5 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

