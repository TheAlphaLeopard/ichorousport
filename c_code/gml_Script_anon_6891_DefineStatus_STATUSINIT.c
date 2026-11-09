// gml_Script_anon_6891_DefineStatus_STATUSINIT @ 0x1405c5e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6891_DefineStatus_STATUSINIT
          (longlong *param_1,undefined1 **param_2,undefined8 *param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  longlong *local_res8;
  undefined1 **local_res10;
  undefined4 local_res18;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 **ppuVar17;
  undefined1 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 *local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined1 *local_220;
  undefined4 local_218;
  uint local_214;
  undefined1 *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 *local_110;
  undefined4 local_108;
  uint local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_230 = "gml_Script_anon@5379@DefineStatus@STATUSINIT";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0xff;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_1fc = 0xffffff;
  local_208 = (undefined1 *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_214 = 0xffffff;
  local_220 = (undefined1 *)0x0;
  local_104 = 0xffffff;
  local_110 = (undefined1 *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_114 = 0xffffff;
  local_120 = (undefined1 *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_25c = 0;
  local_268 = 0;
  local_23c = 0;
  local_248 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x100;
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff218);
  uStack_26c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_270 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
    local_278 = (undefined1 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_278,puVar7);
  }
  local_res18 = 1;
  FUN_140042560(&local_278,uVar5);
  local_288 = local_278;
  uStack_280 = uStack_270;
  uStack_27c = uStack_26c;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_288);
  local_res18 = 0;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_228 = 0x102;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
  uStack_26c = DAT_141dd4684;
  uStack_270 = DAT_141dd4680;
  if ((1 << ((byte)DAT_141dd4684 & 0x1f) & 0x46U) == 0) {
    local_278 = DAT_141dd4678;
  }
  else {
    FUN_1400419b0(&local_278,&DAT_141dd4678);
  }
  iVar3 = FUN_140e851f0(uVar5,&local_278,DAT_141955260,0);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (iVar3 == 0) {
    local_228 = 0x103;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5838);
    puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff148);
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5838);
    local_288 = (undefined1 *)CONCAT44(uRam0000000141dc6744,_DAT_141dc6740);
    uStack_280 = uRam0000000141dc6748;
    uStack_27c = uRam0000000141dc674c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_288);
    local_158 = local_1f8;
    local_24c = *(undefined4 *)((longlong)puVar8 + 0xc);
    local_250 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_258 = (undefined1 *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_258,puVar8);
    }
    local_res18 = 2;
    FUN_140042560(&local_258,&local_168);
    uStack_26c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_270 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
      local_278 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_278,puVar7);
    }
    local_res18 = 6;
    FUN_1400462a0(&local_278,&local_258);
    local_288 = local_278;
    uStack_280 = uStack_270;
    uStack_27c = uStack_26c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_288);
    local_res18 = 2;
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_150 = local_1e8;
    FUN_140e609c0(local_res8);
    puVar8 = (undefined8 *)FUN_140e79090(&local_268,2,&local_158);
    if (puVar8 != puVar9) {
      local_288 = (undefined1 *)*puVar8;
      uStack_280 = *(undefined4 *)(puVar8 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    FUN_140e60910(1);
    local_228 = 0x104;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5fc8);
    uVar4 = FUN_140e851f0(puVar7,uVar5,DAT_141955260,1);
    if (uVar4 < 0x80000000) {
      local_228 = 0x105;
      (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5838);
      puVar10 = (undefined *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff228);
      if (puVar10 != &DAT_141dd45a8) {
        local_288 = (undefined1 *)CONCAT44(uRam0000000141dd45ac,_DAT_141dd45a8);
        uStack_280 = uRam0000000141dd45b0;
        uStack_27c = DAT_141dd45b4;
        if ((1 << ((byte)*(undefined4 *)(puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_288);
      }
      local_228 = 0x106;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a9f8);
      FUN_140e609c0(local_res8);
      uStack_27c = 0xf;
      local_288 = (undefined1 *)0x1000001000002e7;
      if (&local_288 != puVar7) {
        local_278 = (undefined1 *)0x1000001000002e7;
        uStack_270 = uStack_280;
        uStack_26c = 0xf;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_278);
      }
      FUN_140e60910(1);
    }
    local_228 = 0x108;
  }
  else {
    local_228 = 0x10b;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff108);
    FUN_140e609c0(local_res8);
    FUN_1400460e0(uVar5,&local_168);
    FUN_140e60910(1);
    local_228 = 0x10c;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_208,local_res8,local_res10);
    FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_a8,local_res8,local_res10);
    local_288 = local_208;
    uStack_280 = uStack_200;
    uStack_27c = uStack_1fc;
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_288);
    local_158 = local_1f8;
    local_288 = (undefined1 *)local_a8;
    uStack_280 = uStack_a0;
    uStack_27c = uStack_9c;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_288);
    local_150 = local_1e8;
    local_288 = (undefined1 *)CONCAT44(uRam00000001419e6954,_DAT_1419e6950);
    uStack_280 = uRam00000001419e6958;
    uStack_27c = uRam00000001419e695c;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_288);
    local_148 = local_1d8;
    uStack_27c = 0xf;
    local_288 = (undefined1 *)0x100000100000021;
    local_278 = (undefined1 *)0x100000100000021;
    uStack_270 = uStack_280;
    uStack_26c = 0xf;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_278);
    local_140 = &local_1c8;
    local_288 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_280 = DAT_1419df7b8;
    uStack_27c = DAT_1419df7bc;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_288);
    local_138 = &local_1b8;
    gml_Script____struct___139_light_flash_create_lighting_system
              (local_res8,local_res10,&local_268,5,&local_158);
    local_228 = 0x10d;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff108);
    uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff318);
    uVar4 = FUN_140e851f0(uVar5,uVar11,DAT_141955260,1);
    if (uVar4 < 0x80000000) {
      local_228 = 0x10f;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff318);
      uVar11 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff108);
      FUN_140e609c0(local_res8);
      FUN_1400462a0(uVar11,uVar5);
      FUN_140e60910(1);
      local_228 = 0x110;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff268);
      FUN_140e63610(local_res8,local_res10,&local_268,0,uVar5,0);
      local_228 = 0x112;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_208,local_res8,local_res10);
      local_288 = (undefined1 *)CONCAT44(uRam00000001419e6964,_DAT_1419e6960);
      uStack_280 = uRam00000001419e6968;
      uStack_27c = uRam00000001419e696c;
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_288);
      local_158 = local_1f8;
      local_288 = (undefined1 *)CONCAT44(uRam00000001419e6944,_DAT_1419e6940);
      uStack_280 = uRam00000001419e6948;
      uStack_27c = uRam00000001419e694c;
      if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_288);
      local_150 = local_1e8;
      FUN_140e87170(uVar5,DAT_141a0a788,0x80000000,&local_220,local_res8,local_res10);
      plVar15 = local_res8;
      FUN_140e87170(uVar5,DAT_141a101f8,0x80000000,&local_110,local_res8,local_res10);
      uVar13 = (undefined4)((ulonglong)plVar15 >> 0x20);
      uVar5 = FUN_140e78db0(&local_248,2,&local_158);
      local_258 = (undefined1 *)FUN_140e794b0(0,0x4020000000000000);
      local_24c = 0;
      local_res18 = 8;
      FUN_140042560(&local_258,uVar5);
      uStack_26c = uStack_1fc;
      uStack_270 = uStack_200;
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
        local_278 = local_208;
      }
      else {
        FUN_1400419b0(&local_278,&local_208);
      }
      local_res18 = 0x18;
      FUN_1400460e0(&local_278,&local_258);
      local_288 = local_278;
      uStack_280 = uStack_270;
      uStack_27c = uStack_26c;
      if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_288);
      local_res18 = 8;
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_res18 = 0;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_148 = local_1d8;
      uStack_26c = local_104;
      uStack_270 = local_108;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
        local_278 = local_110;
      }
      else {
        FUN_1400419b0(&local_278,&local_110);
      }
      local_res18 = 0x20;
      uStack_27c = 7;
      local_288 = (undefined1 *)CONCAT44(local_288._4_4_,2);
      FUN_1400462a0(&local_278,&local_288);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_24c = local_214;
      local_250 = local_218;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
        local_258 = local_220;
      }
      else {
        FUN_1400419b0(&local_258,&local_220);
      }
      local_res18 = 0x60;
      uStack_27c = 7;
      local_288 = (undefined1 *)CONCAT44(local_288._4_4_,4);
      FUN_1400462a0(&local_258,&local_288);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      puVar14 = local_278;
      if ((uStack_26c & 0xffffff) != 0) {
        puVar14 = (undefined1 *)FUN_140e4b060(&local_278);
      }
      if ((local_24c & 0xffffff) == 0) {
        uVar12 = SUB84(local_258,0);
      }
      else {
        uVar12 = FUN_140e4b060(&local_258);
      }
      local_1c8 = FUN_140e794b0(uVar12,puVar14);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1bc = 0;
      local_res18 = 0x20;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_res18 = 0;
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_140 = &local_1c8;
      local_288 = (undefined1 *)CONCAT44(uRam0000000141dd45dc,_DAT_141dd45d8);
      uStack_280 = uRam0000000141dd45e0;
      uStack_27c = DAT_141dd45e4;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_288);
      uStack_27c = 0xf;
      local_288 = (undefined1 *)0x10000000000012d;
      local_278 = (undefined1 *)0x10000000000012d;
      uStack_270 = uStack_280;
      uStack_26c = 0xf;
      local_138 = &local_1b8;
      if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_278);
      local_130 = local_1a8;
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_268,4,CONCAT44(uVar13,DAT_141a0a7c8),
                            &local_148);
      iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
      if (0 < iVar3) {
        do {
          local_228 = 0x116;
          uStack_27c = 0xf;
          local_288 = (undefined1 *)0x100000100000132;
          local_278 = (undefined1 *)0x100000100000132;
          uStack_270 = uStack_280;
          uStack_26c = 0xf;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_278);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
          cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_78,&local_res8,&local_res10);
      local_228 = 0x119;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_288 = (undefined1 *)CONCAT44(uRam00000001419e6974,_DAT_1419e6970);
      uStack_280 = uRam00000001419e6978;
      uStack_27c = uRam00000001419e697c;
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_288);
      local_158 = local_1f8;
      uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_268,1,&local_158);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 != '\0') {
        local_228 = 0x11b;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
        FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_208,local_res8,local_res10);
        local_288 = (undefined1 *)CONCAT44(uRam00000001419e6964,_DAT_1419e6960);
        uStack_280 = uRam00000001419e6968;
        uStack_27c = uRam00000001419e696c;
        if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_288);
        local_150 = local_1e8;
        local_288 = (undefined1 *)CONCAT44(uRam00000001419e6944,_DAT_1419e6940);
        uStack_280 = uRam00000001419e6948;
        uStack_27c = uRam00000001419e694c;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_288);
        local_148 = local_1d8;
        plVar15 = local_res8;
        FUN_140e87170(uVar5,DAT_141a0a788,0x80000000,&local_220,local_res8,local_res10);
        uVar13 = (undefined4)((ulonglong)plVar15 >> 0x20);
        uVar5 = FUN_140e78db0(&local_178,2,&local_150);
        local_258 = (undefined1 *)FUN_140e794b0(0,0x4020000000000000);
        local_24c = 0;
        local_res18 = 0x80;
        FUN_140042560(&local_258,uVar5);
        uStack_26c = uStack_1fc;
        uStack_270 = uStack_200;
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
          local_278 = local_208;
        }
        else {
          FUN_1400419b0(&local_278,&local_208);
        }
        local_res18 = 0x180;
        FUN_1400460e0(&local_278,&local_258);
        local_288 = local_278;
        uStack_280 = uStack_270;
        uStack_27c = uStack_26c;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_288);
        local_res18 = 0x80;
        if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_res18 = 0;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_140 = &local_1c8;
        local_24c = local_214;
        local_250 = local_218;
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
          local_258 = local_220;
        }
        else {
          FUN_1400419b0(&local_258,&local_220);
        }
        local_res18 = 0x200;
        uStack_27c = 7;
        local_288 = (undefined1 *)CONCAT44(local_288._4_4_,8);
        FUN_1400460e0(&local_258,&local_288);
        if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        uStack_26c = local_214;
        uStack_270 = local_218;
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
          local_278 = local_220;
        }
        else {
          FUN_1400419b0(&local_278,&local_220);
        }
        local_res18 = 0x600;
        uStack_27c = 7;
        local_288 = (undefined1 *)CONCAT44(local_288._4_4_,6);
        FUN_1400462a0(&local_278,&local_288);
        if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        puVar14 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          puVar14 = (undefined1 *)FUN_140e4b060(&local_258);
        }
        if ((uStack_26c & 0xffffff) == 0) {
          uVar12 = SUB84(local_278,0);
        }
        else {
          uVar12 = FUN_140e4b060(&local_278);
        }
        local_1b8 = FUN_140e794b0(uVar12,puVar14);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1ac = 0;
        local_res18 = 0x200;
        if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_res18 = 0;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_288 = (undefined1 *)CONCAT44(uRam0000000141dd456c,_DAT_141dd4568);
        uStack_280 = uRam0000000141dd4570;
        uStack_27c = DAT_141dd4574;
        local_138 = &local_1b8;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_288);
        local_130 = local_1a8;
        uStack_27c = 0xf;
        local_288 = (undefined1 *)0x10000000000012d;
        local_278 = (undefined1 *)0x10000000000012d;
        uStack_270 = uStack_280;
        uStack_26c = 0xf;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_278);
        local_128 = local_198;
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_248,4,CONCAT44(uVar13,DAT_141a0a7c8),
                              &local_140);
        iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar5);
        if (0 < iVar3) {
          do {
            local_228 = 0x11f;
            uStack_27c = 0xf;
            local_288 = (undefined1 *)0x100000100000133;
            local_278 = (undefined1 *)0x100000100000133;
            uStack_270 = uStack_280;
            uStack_26c = 0xf;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_278);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
            cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_98,&local_res8,&local_res10);
        if (local_88 != 0) {
          FUN_140e4cd60();
        }
      }
      if (local_68 != 0) {
        FUN_140e4cd60();
      }
    }
    local_228 = 0x127;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    plVar15 = local_res8;
    ppuVar18 = local_res10;
    FUN_140e87170(uVar5,DAT_141a0a7e8,0,&local_b8,local_res8,local_res10);
    uStack_27c = 0;
    local_288 = &DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(&local_b8,&local_288,DAT_141955260,0);
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if (iVar3 == 0) {
      local_228 = 0x129;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      uStack_27c = 0xf;
      local_288 = (undefined1 *)0x10000010000000c;
      local_278 = (undefined1 *)0x10000010000000c;
      uStack_270 = uStack_280;
      uStack_26c = 0xf;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      FUN_140041b80(&local_f0,&local_278);
      FUN_140e87930(uVar5,DAT_141a574b0,0x80000000,&local_f0);
      local_228 = 0x12a;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
      uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
      uVar16 = (ulonglong)plVar15 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_1419f5b48,0x80000000,&local_120,uVar16,uVar19);
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a574b0,0x80000000,&local_c8,uVar16,uVar19 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar16 >> 0x20);
      local_288 = (undefined1 *)local_c8;
      uStack_280 = uStack_c0;
      uStack_27c = uStack_bc;
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_288);
      local_158 = local_1f8;
      ppuVar18 = &local_158;
      uVar11 = FUN_140e634e0(local_res8,local_res10,&local_268,1,CONCAT44(uVar13,DAT_141a047c8),
                             ppuVar18);
      uStack_26c = local_114;
      uStack_270 = local_118;
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) == 0) {
        local_278 = local_120;
      }
      else {
        FUN_1400419b0(&local_278,&local_120);
      }
      local_res18 = 0x800;
      FUN_140042560(&local_278,uVar11);
      local_288 = local_278;
      uStack_280 = uStack_270;
      uStack_27c = uStack_26c;
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_288);
      local_res18 = 0;
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140e86c30(uVar5,DAT_141a0a7e8,0,&local_100);
    }
    local_228 = 0x12e;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff158);
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar13 = (undefined4)*puVar7;
    }
    else {
      uVar13 = FUN_140e4b060(puVar7);
    }
    dVar1 = (double)FUN_1412a79b0(uVar13,0x4039000000000000);
    if ((dVar1 == 0.0) && (cVar2 = FUN_140e491e0(uVar6), cVar2 == '\0')) {
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_288 = (undefined1 *)CONCAT44(uRam00000001419e6924,_DAT_1419e6920);
      uStack_280 = uRam00000001419e6928;
      uStack_27c = uRam00000001419e692c;
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_288);
      local_158 = local_1f8;
      ppuVar17 = &local_158;
      uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_268,1,ppuVar17);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 != '\0') {
        local_228 = 0x12f;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff0f8);
        FUN_140e87440(uVar5,DAT_1419f4a98,0x80000000,&local_e0,
                      (ulonglong)ppuVar17 & 0xffffffffffffff00,
                      (ulonglong)ppuVar18 & 0xffffffffffffff00);
        uVar5 = FUN_140069500(uVar5);
        FUN_140e63610(uVar5,local_res10,&local_248,0,&local_e0,0);
      }
    }
    local_228 = 0x131;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff158);
    cVar2 = FUN_140e491e0(uVar6);
    FUN_140162d40(uVar5,cVar2 == '\0');
    local_228 = 0x133;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5838);
    puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff0c8);
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5838);
    local_288 = (undefined1 *)CONCAT44(uRam0000000141dc6744,_DAT_141dc6740);
    uStack_280 = uRam0000000141dc6748;
    uStack_27c = uRam0000000141dc674c;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_288);
    local_158 = local_1f8;
    local_24c = *(undefined4 *)((longlong)puVar8 + 0xc);
    local_250 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_258 = (undefined1 *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_258,puVar8);
    }
    local_res18 = 0x1000;
    FUN_140042560(&local_258,&local_168);
    uStack_26c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_270 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
      local_278 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_278,puVar7);
    }
    local_res18 = 0x3000;
    FUN_1400462a0(&local_278,&local_258);
    local_288 = local_278;
    uStack_280 = uStack_270;
    uStack_27c = uStack_26c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_288);
    local_res18 = 0x1000;
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_150 = local_1e8;
    FUN_140e609c0(local_res8);
    puVar7 = (undefined8 *)FUN_140e79090(&local_268,2,&local_158);
    if (puVar7 != puVar9) {
      local_288 = (undefined1 *)*puVar7;
      uStack_280 = *(undefined4 *)(puVar7 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

