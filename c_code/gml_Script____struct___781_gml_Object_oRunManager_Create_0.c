// gml_Script____struct___781_gml_Object_oRunManager_Create_0 @ 0x140d42c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___781_gml_Object_oRunManager_Create_0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  undefined4 uVar11;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_res18 = 0;
  local_130 = "gml_Object_oRotManager_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  uVar11 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_128 = 2;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  uStack_14c = 0;
  local_158 = 0x401c000000000000;
  uVar3 = FUN_140e851f0(uVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar3 < 0x80000000) {
    local_128 = 3;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3d8);
    plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3d8);
    cVar2 = FUN_140e491e0(uVar5);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar6);
    }
    *(undefined4 *)((longlong)plVar6 + 0xc) = 0xd;
    if (cVar2 == '\0') {
      uVar3 = 0x3ff00000;
    }
    else {
      uVar3 = 0;
    }
    *plVar6 = (ulonglong)uVar3 << 0x20;
    local_128 = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_168 = CONCAT44(uRam00000001419ed844,_DAT_1419ed840);
    uStack_160 = uRam00000001419ed848;
    uStack_15c = uRam00000001419ed84c;
    if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_168);
    local_a8 = local_118;
    local_168 = CONCAT44(uRam00000001419ed864,_DAT_1419ed860);
    uStack_160 = uRam00000001419ed868;
    uStack_15c = uRam00000001419ed86c;
    if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a0 = local_108;
    local_168 = CONCAT44(uRam0000000141ddb32c,_DAT_141ddb328);
    uStack_160 = uRam0000000141ddb330;
    uStack_15c = DAT_141ddb334;
    if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_168);
    local_98 = local_f8;
    uStack_15c = 0xf;
    local_168 = 0x1000000000000a3;
    local_158 = 0x1000000000000a3;
    uStack_150 = uStack_160;
    uStack_14c = 0xf;
    if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_158);
    local_90 = local_e8;
    uVar9 = CONCAT44(uVar11,DAT_141a0a7c8);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_148,4,uVar9,&local_a8);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    iVar4 = FUN_140e63cb0(local_60,&local_res8,&local_res10,uVar7);
    if (0 < iVar4) {
      do {
        local_128 = 7;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = &DAT_bff0000000000000;
        local_128 = 8;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        puVar8 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419fd3d8);
        local_168 = CONCAT44(uRam00000001419ed874,_DAT_1419ed870);
        uStack_160 = uRam00000001419ed878;
        uStack_15c = uRam00000001419ed87c;
        if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_168);
        local_a8 = local_118;
        ppuVar10 = &local_a8;
        uVar7 = gml_Script_choose_weighted(local_res8,local_res10,&local_148,1,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
        uStack_150 = *(undefined4 *)(puVar8 + 1);
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
          local_158 = *puVar8;
        }
        else {
          FUN_1400419b0(&local_158,puVar8);
        }
        local_res18 = 4;
        FUN_1400460e0(&local_158,uVar7);
        local_168 = local_158;
        uStack_160 = uStack_150;
        uStack_15c = uStack_14c;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_168);
        local_res18 = 0;
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_c8);
        cVar2 = FUN_140e643f0(local_60,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_60,&local_res8,&local_res10);
    local_128 = 0xb;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a58110);
    local_168 = CONCAT44(uRam0000000141dc7614,_DAT_141dc7610);
    uStack_160 = uRam0000000141dc7618;
    uStack_15c = uRam0000000141dc761c;
    if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_168);
    local_a8 = local_118;
    uVar9 = CONCAT44(uVar11,DAT_141a0a0d8);
    puVar8 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_148,1,uVar9,&local_a8);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_150 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_158 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_158,puVar8);
    }
    local_res18 = 8;
    uStack_15c = 7;
    local_168 = CONCAT44(local_168._4_4_,2);
    FUN_140042560(&local_158,&local_168);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar3 = FUN_140e851f0(uVar7,&local_158,DAT_141955260,1);
    local_res18 = 0;
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (uVar3 < 0x80000000) {
      local_128 = 0xd;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      local_168 = CONCAT44(uRam00000001419ed884,_DAT_1419ed880);
      uStack_160 = uRam00000001419ed888;
      uStack_15c = uRam00000001419ed88c;
      if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_168);
      local_a0 = local_108;
      local_168 = CONCAT44(uRam00000001419ed854,_DAT_1419ed850);
      uStack_160 = uRam00000001419ed858;
      uStack_15c = uRam00000001419ed85c;
      if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_168);
      local_98 = local_f8;
      local_168 = CONCAT44(uRam0000000141ddb32c,_DAT_141ddb328);
      uStack_160 = uRam0000000141ddb330;
      uStack_15c = DAT_141ddb334;
      if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_168);
      local_90 = local_e8;
      uStack_15c = 0xf;
      local_168 = 0x1000000000000a3;
      local_158 = 0x1000000000000a3;
      uStack_150 = uStack_160;
      uStack_14c = 0xf;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_158);
      local_88 = local_d8;
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_b8,4,CONCAT44(uVar11,DAT_141a0a7c8),
                            &local_a0);
      iVar4 = FUN_140e63cb0(&local_80,&local_res8,&local_res10,uVar7);
      if (0 < iVar4) {
        do {
          local_128 = 0xf;
          puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0x3ff0000000000000;
          local_128 = 0x10;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_148 = 0;
          local_140 = 0;
          local_13c = 5;
          puVar8 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419fd3d8);
          local_168 = CONCAT44(uRam00000001419ed874,_DAT_1419ed870);
          uStack_160 = uRam00000001419ed878;
          uStack_15c = uRam00000001419ed87c;
          if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_168);
          local_a8 = local_118;
          uVar7 = gml_Script_choose_weighted(local_res8,local_res10,&local_148,1,&local_a8);
          uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
          uStack_150 = *(undefined4 *)(puVar8 + 1);
          if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
            local_158 = *puVar8;
          }
          else {
            FUN_1400419b0(&local_158,puVar8);
          }
          local_res18 = 0x10;
          FUN_1400460e0(&local_158,uVar7);
          local_168 = local_158;
          uStack_160 = uStack_150;
          uStack_15c = uStack_14c;
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_168);
          local_res18 = 0;
          if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_c8);
          cVar2 = FUN_140e643f0(&local_80,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(&local_80,&local_res8,&local_res10);
      if (local_70 != 0) {
        FUN_140e4cd60();
      }
    }
    local_128 = 0x14;
    puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
    local_128 = 0x16;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_168 = CONCAT44(uRam00000001419ed834,_DAT_1419ed830);
    uStack_160 = uRam00000001419ed838;
    uStack_15c = uRam00000001419ed83c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_168);
    local_a8 = local_118;
    local_168 = CONCAT44(uRam00000001419ed894,_DAT_1419ed890);
    uStack_160 = uRam00000001419ed898;
    uStack_15c = uRam00000001419ed89c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a0 = local_108;
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 == '\0') {
      uStack_15c = 0;
      local_168 = 0x4070e00000000000;
      puVar8 = &local_168;
      uVar3 = 2;
    }
    else {
      uStack_14c = 0;
      local_158 = 0x4056800000000000;
      puVar8 = &local_158;
      uVar3 = 1;
    }
    uVar1 = uStack_14c;
    uVar11 = uStack_15c;
    local_80 = *(undefined4 *)puVar8;
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_78 = *(undefined4 *)(puVar8 + 1);
    uStack_74 = *(undefined4 *)((longlong)puVar8 + 0xc);
    local_res18 = uVar3;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_80);
    if (((uVar3 & 2) != 0) &&
       (uVar3 = uVar3 & 0xfffffffd, local_res18 = uVar3, (1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0))
    {
      FUN_140041a50(&local_168);
    }
    if (((uVar3 & 1) != 0) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_158);
    }
    local_98 = local_f8;
    local_80 = (undefined4)DAT_1419df7b0;
    uStack_7c = DAT_1419df7b0._4_4_;
    uStack_78 = DAT_1419df7b8;
    uStack_74 = DAT_1419df7bc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_80);
    local_90 = local_e8;
    FUN_14044e5b0(local_res8,local_res10,&local_148,4,&local_a8);
    if (local_50 != 0) {
      FUN_140e4cd60();
    }
  }
  local_128 = 0x1a;
  cVar2 = FUN_140eab100(0x28);
  if (cVar2 != '\0') {
    local_128 = 0x1b;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a58110);
    FUN_140046040(uVar5);
  }
  local_128 = 0x1d;
  uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140046040(uVar5);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

