// gml_Script_region_clear_anon_23579___scribble_class_element___scribble_class_element @ 0x14011c7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_region_clear_anon_23579___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  uint local_140;
  longlong local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50 [3];
  
  local_150 = 
  "gml_Script_region_set_active@anon@22272@__scribble_class_element@__scribble_class_element";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x2ce;
  _eh_vector_constructor_iterator_(&local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  bVar10 = 0xff;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x2d0;
  puVar13 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14011c928:
    local_188 = *(undefined4 *)puVar7;
    uStack_184 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_180 = *(undefined4 *)(puVar7 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_188);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_78) goto LAB_14011c928;
  }
  local_50[0] = &local_78;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_178,1,DAT_1419fdbf8,local_50);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_148 = 0x2d2;
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05428);
    FUN_140e609c0(param_1);
    if (puVar13 != &DAT_1419df7b0) {
      local_188 = (undefined4)DAT_1419df7b0;
      uStack_184 = DAT_1419df7b0._4_4_;
      uStack_180 = DAT_1419df7b8;
      uStack_17c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      FUN_140041b80(puVar13,&local_188);
    }
    FUN_140e60910(1);
    local_148 = 0x2d3;
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04f68);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = 0;
    local_148 = 0x2d4;
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05308);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = 0;
    local_148 = 0x2d5;
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05a78);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = 0;
    local_148 = 0x2d6;
    puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05728);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar13);
    }
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *puVar13 = 0;
    local_148 = 0x2d7;
    uVar12 = 0xffffff;
  }
  else {
    local_148 = 0x2da;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
    local_188 = _DAT_1419df7c0;
    uStack_184 = uRam00000001419df7c4;
    uStack_180 = uRam00000001419df7c8;
    uStack_17c = uRam00000001419df7cc;
    if ((1 << ((byte)_local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_188);
    local_68 = &local_a8;
    puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_178,1,uVar6,&local_68);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar7 != &local_128) {
      local_188 = *(undefined4 *)puVar7;
      uStack_184 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_180 = *(undefined4 *)(puVar7 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_188);
    }
    local_148 = 0x2db;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_68 = &local_128;
    ppuVar15 = &local_68;
    uVar14 = CONCAT44(uVar3,DAT_1419fcb88);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar14,ppuVar15);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_148 = 0x2db;
      if (param_3 != &DAT_1419df7b0) {
        local_188 = (undefined4)DAT_1419df7b0;
        uStack_184 = DAT_1419df7b0._4_4_;
        uStack_180 = DAT_1419df7b8;
        uStack_17c = DAT_1419df7bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_188);
      }
      goto LAB_14011d02d;
    }
    local_148 = 0x2dd;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05148);
    uVar3 = FUN_140e4a740(uVar6);
    uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_128,DAT_141a05ec8,uVar3,&local_b8,uVar14,uVar16);
    local_188 = (undefined4)local_b8;
    uStack_184 = local_b8._4_4_;
    uStack_180 = uStack_b0;
    uStack_17c = uStack_ac;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_188);
    local_148 = 0x2de;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_118,DAT_141a050f8,0x80000000,&local_c8,uVar14,uVar16);
    local_188 = (undefined4)local_c8;
    uStack_184 = local_c8._4_4_;
    uStack_180 = uStack_c0;
    uStack_17c = uStack_bc;
    FUN_140041b80(&local_e8,&local_188);
    local_148 = 0x2e0;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    lVar1 = local_e8;
    local_15c = 0;
    local_168 = 0.0;
    iVar11 = 0;
    local_140 = uStack_dc;
    if ((uStack_dc == 2) && (local_e8 != 0)) {
      iVar11 = *(int *)(local_e8 + 0x24);
    }
    if (0 < iVar11) {
      uVar12 = uStack_dc & 0xffffff;
      do {
        iVar11 = iVar11 + -1;
        local_148 = 0x2e3;
        iVar4 = FUN_140e4a740(&local_168);
        plVar9 = (longlong *)0x0;
        if ((uVar12 == 2) && (lVar1 != 0)) {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
          }
          else {
            plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
          if (plVar9 != &local_138) goto LAB_14011ce06;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar9 = &local_e8;
LAB_14011ce06:
          local_188 = (undefined4)*plVar9;
          uStack_184 = *(undefined4 *)((longlong)plVar9 + 4);
          uStack_180 = (undefined4)plVar9[1];
          uStack_17c = *(undefined4 *)((longlong)plVar9 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_188);
        }
        local_148 = 0x2e4;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_138,DAT_141a05b88,0x80000000,&local_d8,uVar14,uVar16);
        if (param_4 < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*param_5;
        }
        iVar4 = FUN_140e851f0(&local_d8,puVar7,DAT_141955260,0);
        if (iVar4 == 0) {
          local_148 = 0x2e6;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05428);
          FUN_140e609c0(param_1);
          if (param_4 < 1) {
            puVar8 = &DAT_1419df7b0;
          }
          else {
            puVar8 = (undefined8 *)*param_5;
          }
          if (puVar8 != puVar7) {
            local_188 = *(undefined4 *)puVar8;
            uStack_184 = *(undefined4 *)((longlong)puVar8 + 4);
            uStack_180 = *(undefined4 *)(puVar8 + 1);
            uStack_17c = *(undefined4 *)((longlong)puVar8 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_188);
          }
          FUN_140e60910(1);
          local_148 = 0x2e7;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04f68);
          uVar16 = uVar16 & 0xffffffffffffff00;
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_138,DAT_141a05698,0x80000000,&local_f8,uVar14,uVar16);
          FUN_140e609c0(param_1);
          if (&local_f8 != puVar7) {
            local_188 = (undefined4)local_f8;
            uStack_184 = local_f8._4_4_;
            uStack_180 = uStack_f0;
            uStack_17c = uStack_ec;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_188);
          }
          FUN_140e60910(1);
          local_148 = 0x2e8;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05308);
          FUN_140e87440(&local_138,DAT_141a05858,0x80000000,&local_108,uVar14 & 0xffffffffffffff00,
                        uVar16 & 0xffffffffffffff00);
          FUN_140e609c0(param_1);
          if (&local_108 != puVar7) {
            local_188 = (undefined4)local_108;
            uStack_184 = local_108._4_4_;
            uStack_180 = uStack_100;
            uStack_17c = uStack_fc;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_188);
          }
          FUN_140e60910(1);
          local_148 = 0x2e9;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05a78);
          FUN_140e609c0(param_1);
          if (param_4 < 2) {
            puVar8 = &DAT_1419df7b0;
          }
          else {
            puVar8 = (undefined8 *)param_5[1];
          }
          if (puVar8 != puVar7) {
            local_188 = *(undefined4 *)puVar8;
            uStack_184 = *(undefined4 *)((longlong)puVar8 + 4);
            uStack_180 = *(undefined4 *)(puVar8 + 1);
            uStack_17c = *(undefined4 *)((longlong)puVar8 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_188);
          }
          FUN_140e60910(1);
          local_148 = 0x2ea;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05728);
          FUN_140e609c0(param_1);
          if (2 < param_4) {
            puVar13 = (undefined8 *)param_5[2];
          }
          if (puVar13 != puVar7) {
            local_188 = *(undefined4 *)puVar13;
            uStack_184 = *(undefined4 *)((longlong)puVar13 + 4);
            uStack_180 = *(undefined4 *)(puVar13 + 1);
            uStack_17c = *(undefined4 *)((longlong)puVar13 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_188);
          }
          FUN_140e60910(1);
          local_148 = 0x2eb;
          goto LAB_14011d021;
        }
        local_148 = 0x2ee;
        uVar5 = local_15c & 0xffffff;
        if (uVar5 == 0) {
LAB_14011ceea:
          local_168 = local_168 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_168 = (double)FUN_140e4b060(&local_168);
            local_15c = 0;
            goto LAB_14011ceea;
          }
          if (uVar5 == 7) {
            local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_15c = 0;
              goto LAB_14011ceea;
            }
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
          }
        }
      } while (0 < iVar11);
    }
    local_148 = 0x2f1;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_188 = _DAT_141dcb6e8;
    uStack_184 = uRam0000000141dcb6ec;
    uStack_180 = uRam0000000141dcb6f0;
    uStack_17c = DAT_141dcb6f4;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_188);
    local_68 = &local_a8;
    if ((param_4 < 1) || (puVar13 = (undefined8 *)*param_5, puVar13 != &local_98)) {
      local_188 = *(undefined4 *)puVar13;
      uStack_184 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_180 = *(undefined4 *)(puVar13 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar13 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_188);
    }
    local_60 = &local_98;
    local_188 = _DAT_141dcb578;
    uStack_184 = uRam0000000141dcb57c;
    uStack_180 = uRam0000000141dcb580;
    uStack_17c = DAT_141dcb584;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_188);
    local_58 = local_88;
    FUN_1401ef7f0(param_1,param_2,&local_178,3,&local_68);
LAB_14011d021:
    uVar12 = local_140;
  }
  bVar10 = (byte)uVar12;
LAB_14011d02d:
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << (bVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

