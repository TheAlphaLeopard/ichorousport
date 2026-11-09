// gml_Script___scribble_texture_get_material @ 0x140206860

undefined8 *
gml_Script___scribble_texture_get_material
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  int local_res20;
  longlong **pplVar14;
  undefined8 **ppuVar15;
  undefined8 uVar16;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined8 ****local_418;
  char *local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  longlong *local_3e8;
  longlong *local_3e0;
  undefined8 *local_3d8;
  undefined1 *local_3d0;
  longlong *local_3c8;
  undefined1 *local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  longlong local_398 [2];
  undefined8 local_388 [2];
  undefined8 local_378 [2];
  undefined1 local_368 [16];
  longlong local_358 [2];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2cc;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  longlong local_290;
  int local_284;
  undefined8 local_280;
  undefined4 local_274;
  longlong local_270;
  longlong local_268;
  int local_25c;
  longlong local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  longlong local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  int local_1e8 [2];
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  ulonglong local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined1 local_120 [24];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [56];
  undefined1 local_80 [40];
  undefined1 local_58 [32];
  
  local_410 = "gml_Script___scribble_system";
  local_418 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_418;
  local_408 = 0xe;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_1e8,param_4,1,param_5);
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_398,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_20c = 0xffffff;
  local_218 = 0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_148 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a518);
  local_140 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a528);
  local_284 = 0xffffff;
  local_290 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_41c = 0;
  local_428 = 0;
  local_3f4 = 0;
  local_400 = 0;
  local_2a4 = 0;
  local_2b0 = 0;
  local_2b4 = 0;
  local_2c0 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_2fc = 0;
  local_308 = 0;
  local_294 = 0;
  local_2a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddad4) &&
     (_Init_thread_header(&DAT_141dddad4), DAT_141dddad4 == -1)) {
    DAT_141dddad8 = (longlong *)FUN_140e63aa0(DAT_141a0a508);
    _Init_thread_footer(&DAT_141dddad4);
  }
  local_408 = 0xe;
  if (local_1e8[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_1e0;
  }
  iVar3 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_408 = 0xe;
    local_22c = 0xd;
    local_238 = 0;
    if (local_1e8[0] < 1) {
      local_1e0 = &DAT_1419df7b0;
    }
    else {
      local_1e0 = (undefined8 *)*local_1e0;
    }
    FUN_140041c60(local_1e0,&local_238);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
  }
  if (DAT_141ddc0a3 == '\0') {
    FUN_140e64380(DAT_141dddad8,"gml_Script___scribble_system");
    FUN_140e64380(local_res8,"gml_Script___scribble_system");
  }
  local_408 = 0x10;
  if (DAT_141ddc0a3 == '\0') {
    DAT_141ddc0a3 = '\x01';
    uVar6 = (**(code **)(*DAT_141dddad8 + 0x10))(DAT_141dddad8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dddad8);
    FUN_140041c60(uVar6,&DAT_1419df7b0);
    FUN_140e60910(1);
  }
  local_408 = 0x11;
  uVar6 = (**(code **)(*DAT_141dddad8 + 8))(DAT_141dddad8,DAT_1419fcb48);
  iVar3 = FUN_140e851f0(uVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_408 = 0x1c;
    if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_428);
    }
    local_428 = 0;
    local_420 = 0;
    local_41c = 5;
    uVar7 = (**(code **)(*DAT_141dddad8 + 0x10))(DAT_141dddad8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dddad8);
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_428,0,CONCAT44(uVar4,DAT_1419fd6d8),0);
    FUN_140041c60(uVar7,uVar8);
    FUN_140e60910(1);
    local_408 = 0x1d;
    local_238 = uVar6;
    iVar3 = FUN_140e63cb0(local_80,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        (**(code **)(*DAT_141dddad8 + 8))(DAT_141dddad8,DAT_1419fcb48);
        local_408 = 0x1f;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        (**(code **)(*DAT_141dddad8 + 8))(DAT_141dddad8,DAT_1419fcb48);
        FUN_140041c60(local_398,&DAT_141dcd998);
        local_3e8 = local_398;
        pplVar14 = &local_3e8;
        gml_Script___scribble_error(local_res8,local_res10,&local_428,1,pplVar14);
        uVar4 = (undefined4)((ulonglong)pplVar14 >> 0x20);
        local_408 = 0x23;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a538);
        FUN_1400441d0(local_398,&DAT_1419e3610);
        local_3e8 = local_398;
        FUN_1400441d0(local_388,&DAT_141dc62b0);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_141a0a588);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x24;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a498);
        FUN_140e609c0(local_res8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,CONCAT44(uVar4,DAT_1419ff3e8),0);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x25;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a4b8);
        FUN_140e609c0(local_res8);
        local_1cc = 0;
        local_1d8 = 0x3ff0000000000000;
        uVar4 = FUN_140e4a740(&local_1d8);
        uVar7 = FUN_140ea89f0(&local_428,uVar4,1);
        FUN_140041c60(uVar6,uVar7);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140e60910(1);
        local_408 = 0x2d;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,&DAT_141dcd968);
        local_3e8 = local_398;
        pplVar14 = &local_3e8;
        gml_Script___scribble_error(local_res8,local_res10,&local_428,1,pplVar14);
        uVar4 = (undefined4)((ulonglong)pplVar14 >> 0x20);
        local_408 = 0x30;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        local_1bc = 0xf;
        local_1c8 = 0x10000080000000a;
        FUN_140041c60(local_398,&local_1c8);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_3e8 = local_398;
        uVar7 = CONCAT44(uVar4,DAT_141a04428);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_428,1,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        cVar1 = FUN_140e491e0(uVar6);
        if (cVar1 == '\0') {
          local_408 = 0x32;
          if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_400);
          }
          local_400 = 0;
          local_3f8 = 0;
          local_3f4 = 5;
          FUN_140041c60(local_388,&DAT_141dcda38);
          local_3e0 = local_388;
          ppuVar15 = &local_3e0;
          FUN_1401ef7f0(local_res8,local_res10,&local_400,1,ppuVar15);
          uVar4 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        }
        local_408 = 0x35;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        FUN_140041c60(local_398,&DAT_141dcdb28);
        local_3e8 = local_398;
        uVar7 = CONCAT44(uVar4,DAT_141a086f8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_400,1,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_140041c60(local_388,uVar6);
        local_3e0 = local_388;
        uVar7 = CONCAT44(uVar4,DAT_141a08638);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_428,1,uVar7,&local_3e0);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        cVar1 = FUN_140e491e0(uVar6);
        if (cVar1 == '\0') {
          local_408 = 0x37;
          if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b0);
          }
          local_2b0 = 0;
          local_2a8 = 0;
          local_2a4 = 5;
          FUN_140041c60(local_378,&DAT_141dcdab8);
          local_3d8 = local_378;
          ppuVar15 = &local_3d8;
          FUN_1401ef7f0(local_res8,local_res10,&local_2b0,1,ppuVar15);
          uVar4 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        }
        local_408 = 0x3a;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        FUN_140041c60(local_398,&DAT_141dcdb28);
        local_3e8 = local_398;
        uVar7 = CONCAT44(uVar4,DAT_141a086f8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_400,1,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_140041c60(local_388,uVar6);
        local_3e0 = local_388;
        uVar7 = CONCAT44(uVar4,DAT_141a086e8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_428,1,uVar7,&local_3e0);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_140041c60(&local_218,uVar6);
        local_408 = 0x3b;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        local_3e8 = &local_218;
        FUN_140044220(local_388,DAT_141a08808);
        local_3e0 = local_388;
        uVar7 = CONCAT44(uVar4,DAT_141a035d8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_428,2,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        iVar3 = FUN_140e851f0(uVar6,&DAT_1419df7b0,DAT_141955260,0);
        if (iVar3 == 0) {
          local_408 = 0x3d;
          if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_400);
          }
          local_400 = 0;
          local_3f8 = 0;
          local_3f4 = 5;
          FUN_140041c60(local_378,&DAT_141dcd888);
          local_3d8 = local_378;
          ppuVar15 = &local_3d8;
          FUN_1401ef7f0(local_res8,local_res10,&local_400,1,ppuVar15);
          uVar4 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        }
        local_408 = 0x40;
        local_2f8 = local_res8;
        local_2f0 = (longlong *)local_res10;
        lVar9 = FUN_140e4cb40(DAT_141a618e8 * 8);
        iVar3 = DAT_141a618e8;
        local_2c8 = lVar9;
        FUN_141290260(lVar9,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
        local_res20 = iVar3;
        local_408 = 0x42;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        FUN_1400441d0(local_398,&DAT_141dc62b0);
        local_3e8 = local_398;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        FUN_140e645a0(local_138,gml_Script____struct___64___scribble_system___scribble_system,
                      local_res8);
        FUN_140041c60(local_368,local_138);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        local_3d0 = local_368;
        uVar6 = FUN_140e8da20(&local_2b0,local_res8,0);
        FUN_140041c60(local_358,uVar6);
        local_3c8 = local_358;
        FUN_1400441d0(local_348,&DAT_1419e3660);
        local_3c0 = local_348;
        uVar7 = CONCAT44(uVar4,DAT_141a02df8);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_400,6,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_140041c60(local_338,uVar6);
        local_3b8 = local_338;
        uVar6 = CONCAT44(uVar4,DAT_141a02f28);
        FUN_140e634e0(local_res8,local_res10,&local_428,1,uVar6,&local_3b8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (lVar9 != 0) {
          FUN_140e4cd60(lVar9);
        }
        local_408 = 0x4e;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08d98);
        local_1ac = 0xd;
        local_1b8 = 0;
        FUN_140041c60(uVar6,&local_1b8);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_408 = 0x4f;
        local_2f8 = local_res8;
        local_2c8 = local_res10;
        lVar9 = FUN_140e4cb40(DAT_141a618e8 * 8);
        iVar3 = DAT_141a618e8;
        local_2f0 = (longlong *)lVar9;
        FUN_141290260(lVar9,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
        local_res20 = iVar3;
        local_408 = 0x51;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        uVar10 = (int)(DAT_141a0a508 | 0x5000000) >> 0x18 & 0xff;
        if (uVar10 == 0xf) {
          uVar12 = 0x4000004;
        }
        else {
          uVar12 = (ulonglong)(uVar10 | 0x1000000);
        }
        local_19c = 0xf;
        local_1a8 = uVar12 << 0x20 | (ulonglong)(DAT_141a0a508 & 0xffffff);
        FUN_140041c60(local_398,&local_1a8);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_3e8 = local_398;
        uVar7 = CONCAT44(uVar4,DAT_1419fcb18);
        uVar6 = FUN_140e634e0(local_res8,local_res10,&local_400,1,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_140041c60(local_388,uVar6);
        local_3e0 = local_388;
        FUN_140e634e0(local_res8,local_res10,&local_428,1,CONCAT44(uVar4,DAT_141a08fb8),&local_3e0);
        local_408 = 0x52;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a08d98);
        local_18c = 0xd;
        local_198 = 0x3ff0000000000000;
        FUN_140041c60(uVar6,&local_198);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_408 = 0x54;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,&DAT_141dcdac8);
        local_3e8 = local_398;
        pplVar14 = &local_3e8;
        gml_Script___scribble_error(local_res8,local_res10,&local_428,1,pplVar14);
        uVar4 = (undefined4)((ulonglong)pplVar14 >> 0x20);
        if (lVar9 != 0) {
          FUN_140e4cd60(lVar9);
        }
        local_408 = 0x5b;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a09ff8);
        local_270 = uVar6;
        uVar7 = FUN_1400441b0(local_120,1);
        FUN_140041c60(uVar6,uVar7);
        FUN_140041b30(local_120);
        local_408 = 0x5c;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a4f8);
        FUN_140044220(uVar7,0);
        local_408 = 0x5d;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a548);
        FUN_140044220(uVar7,0);
        local_408 = 0x5e;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a4d8);
        FUN_140044220(uVar7,0);
        local_408 = 0x5f;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a558);
        FUN_140044220(uVar7,0);
        local_408 = 0x61;
        local_2f8 = local_res8;
        local_2c8 = local_res10;
        lVar9 = FUN_140e4cb40(DAT_141a618e8 * 8);
        iVar3 = DAT_141a618e8;
        local_2f0 = (longlong *)lVar9;
        FUN_141290260(lVar9,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
        local_res20 = iVar3;
        local_408 = 99;
        FUN_140041c60(&local_2e8,&DAT_141dcdb18);
        local_408 = 100;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,&DAT_141dcd9c8);
        local_3e8 = local_398;
        local_3e0 = &local_2e8;
        uVar8 = CONCAT44(uVar4,DAT_141a02d88);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,2,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_2d8,uVar7);
        local_408 = 0x65;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a4f8);
        local_3e8 = &local_2e8;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        uVar8 = FUN_140053940(local_b8,&local_2d8,1);
        FUN_140041c60(local_378,uVar8);
        FUN_140041b30(local_b8);
        local_3d8 = local_378;
        uVar16 = CONCAT44(uVar4,DAT_141a01268);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_400,3,uVar16,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_140041c60(local_368,uVar8);
        local_3d0 = local_368;
        FUN_140e609c0(local_res8);
        uVar16 = CONCAT44(uVar4,DAT_1419fee48);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_428,1,uVar16,&local_3d0);
        uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_140041c60(uVar7,uVar8);
        FUN_140e60910(1);
        local_408 = 0x66;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        local_3e8 = &local_2e8;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        local_3d8 = &local_2d8;
        uVar8 = CONCAT44(uVar4,DAT_141a090e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_2e8,uVar7);
        local_408 = 0x67;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,&DAT_141dcd9c8);
        local_3e8 = local_398;
        local_3e0 = &local_2e8;
        uVar8 = CONCAT44(uVar4,DAT_141a02d88);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,2,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_2d8,uVar7);
        local_408 = 0x68;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a548);
        local_3e8 = &local_2e8;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        uVar8 = FUN_140053940(local_108,&local_2d8,1);
        FUN_140041c60(local_378,uVar8);
        FUN_140041b30(local_108);
        local_3d8 = local_378;
        uVar16 = CONCAT44(uVar4,DAT_141a01268);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_400,3,uVar16,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_140041c60(local_368,uVar8);
        local_3d0 = local_368;
        FUN_140e609c0(local_res8);
        uVar16 = CONCAT44(uVar4,DAT_1419fee48);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_428,1,uVar16,&local_3d0);
        uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_140041c60(uVar7,uVar8);
        FUN_140e60910(1);
        local_408 = 0x69;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        local_3e8 = &local_2e8;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        local_3d8 = &local_2d8;
        uVar8 = CONCAT44(uVar4,DAT_141a090e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_2e8,uVar7);
        local_408 = 0x6a;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,&DAT_141dcd9c8);
        local_3e8 = local_398;
        local_3e0 = &local_2e8;
        uVar8 = CONCAT44(uVar4,DAT_141a02d88);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,2,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(&local_2d8,uVar7);
        local_408 = 0x6b;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a4d8);
        local_3e8 = &local_2e8;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        uVar8 = FUN_140053940(local_f8,&local_2d8,1);
        FUN_140041c60(local_378,uVar8);
        FUN_140041b30(local_f8);
        local_3d8 = local_378;
        uVar16 = CONCAT44(uVar4,DAT_141a01268);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_400,3,uVar16,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_140041c60(local_368,uVar8);
        local_3d0 = local_368;
        FUN_140e609c0(local_res8);
        uVar16 = CONCAT44(uVar4,DAT_1419fee48);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_428,1,uVar16,&local_3d0);
        uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_140041c60(uVar7,uVar8);
        FUN_140e60910(1);
        local_408 = 0x6c;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        uVar7 = FUN_1400419a0(local_res8,DAT_141a0a558);
        local_3e8 = &local_2e8;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        local_3d8 = &local_2d8;
        uVar16 = CONCAT44(uVar4,DAT_141a090e8);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_400,3,uVar16,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
        FUN_140041c60(local_368,uVar8);
        local_3d0 = local_368;
        FUN_140e609c0(local_res8);
        uVar8 = FUN_140e634e0(local_res8,local_res10,&local_428,1,CONCAT44(uVar4,DAT_1419fee48),
                              &local_3d0);
        FUN_140041c60(uVar7,uVar8);
        FUN_140e60910(1);
        if (lVar9 != 0) {
          FUN_140e4cd60(lVar9);
        }
        local_408 = 0x73;
        uVar7 = FUN_140042490(local_res8,DAT_141a0a4f8);
        cVar1 = FUN_140046dd0(uVar7,0x7e9);
        if (cVar1 == '\0') {
          uVar2 = 0;
          uVar7 = FUN_140042490(local_res8,DAT_141a0a4f8);
          cVar1 = FUN_140041d90(uVar7,0x7e8);
          if (cVar1 != '\0') {
            uVar7 = FUN_140042490(local_res8,DAT_141a0a548);
            cVar1 = FUN_140046dd0(uVar7,0x44c);
            if (cVar1 == '\0') {
              uVar7 = FUN_140042490(local_res8,DAT_141a0a548);
              uVar2 = FUN_140041d90(uVar7,0xb);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        else {
          uVar2 = 1;
        }
        FUN_140e609c0(local_res8);
        FUN_140041d00(uVar6,uVar2);
        FUN_140e60910(1);
        local_408 = 0x76;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar4 = 0;
        gml_GlobalScript___scribble_constants(local_res8,local_res10,&local_428,0,0);
        local_408 = 0x78;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a09178);
        uVar7 = FUN_140045f40(local_e8,DAT_141a0a478 | 0x5000000,1);
        FUN_140041c60(uVar6,uVar7);
        FUN_140041b30(local_e8);
        local_408 = 0x7b;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a06198);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x7e;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a0a458);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x7f;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a0a418);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x80;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a095a8);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x83;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a058e8);
        FUN_1400441d0(local_398,&DAT_1419e3600);
        local_3e8 = local_398;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_141a0a588);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x84;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a09108);
        FUN_1400441d0(local_398,&DAT_1419e3600);
        local_3e8 = local_398;
        FUN_1400441d0(local_388,&DAT_1419e3610);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_141a0a588);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x87;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a05808);
        FUN_1400441d0(local_398,&DAT_1419e3620);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_1419df7b0);
        local_3e0 = local_388;
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419fd218);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,2,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0x8a;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        if ((1 << ((byte)local_3f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_400);
        }
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 5;
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c0);
        }
        local_2c0 = 0;
        local_2b8 = 0;
        local_2b4 = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a05158);
        FUN_140e609c0(DAT_141a729d8);
        uVar7 = FUN_140041c40(local_d8,gml_Script___scribble_system,0);
        FUN_140041c60(local_148,uVar7);
        FUN_140e60910(1);
        FUN_140041c60(local_398,local_148);
        FUN_140041b30(local_d8);
        local_3e8 = local_398;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_400,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(local_388,uVar7);
        local_3e0 = local_388;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2c0,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(local_378,uVar7);
        local_3d8 = local_378;
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419fd6d8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xa1;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a05138);
        FUN_140e609c0(DAT_141a729d8);
        uVar7 = FUN_140041c40(local_c8,gml_GlobalScript___scribble_texture_get_material,0);
        FUN_140041c60(local_140,uVar7);
        FUN_140e60910(1);
        FUN_140041c60(local_398,local_140);
        FUN_140041b30(local_c8);
        local_3e8 = local_398;
        uVar7 = FUN_140e8da20(&local_400,local_res8,0);
        FUN_140041c60(local_388,uVar7);
        local_3e0 = local_388;
        uVar7 = FUN_140e8da20(&local_2c0,local_res8,0);
        FUN_140041c60(local_378,uVar7);
        local_3d8 = local_378;
        uVar7 = FUN_140e8da20(&local_1f8,local_res8,0);
        FUN_140041c60(local_368,uVar7);
        local_3d0 = local_368;
        uVar7 = FUN_140e8da20(&local_208,local_res8,0);
        FUN_140041c60(local_358,uVar7);
        local_3c8 = local_358;
        uVar7 = FUN_140e8da20(&local_158,local_res8,0);
        FUN_140041c60(local_348,uVar7);
        local_3c0 = local_348;
        uVar7 = FUN_140e8da20(&local_168,local_res8,0);
        FUN_140041c60(local_338,uVar7);
        local_3b8 = local_338;
        uVar7 = FUN_140e8da20(&local_178,local_res8,0);
        FUN_140041c60(local_328,uVar7);
        local_3b0 = local_328;
        uVar7 = FUN_140e8da20(&local_188,local_res8,0);
        FUN_140041c60(local_318,uVar7);
        local_3a8 = local_318;
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419fd6d8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,9,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xb2;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a06b58);
        uVar7 = FUN_140045f40(local_58,DAT_141a06768 | 0x5000000,1);
        FUN_140041c60(local_398,uVar7);
        FUN_140041b30(local_58);
        local_3e8 = local_398;
        FUN_140e609c0(local_res8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,1,CONCAT44(uVar4,DAT_1419fd6d8),
                              &local_3e8);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xb5;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a08848);
        FUN_140e609c0(local_res8);
        uVar7 = gml_Script___scribble_krutidev_lookup_map_initialize
                          (local_res8,local_res10,&local_428,0,0);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xb6;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a09278);
        FUN_140e609c0(local_res8);
        uVar7 = gml_Script___scribble_krutidev_matra_lookup_map_initialize
                          (local_res8,local_res10,&local_428,0,0);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xb7;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a09218);
        FUN_140e609c0(local_res8);
        uVar4 = 0;
        uVar7 = FUN_1401eda10(local_res8,local_res10,&local_428,0,0);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xba;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a09198);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xbb;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a08f98);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xbe;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a08fa8);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xc2;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a077c8);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xc3;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_140042490(local_res8,DAT_141a077c8);
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda68);
        local_3e0 = local_388;
        FUN_140041c60(local_378,&DAT_1419df7b0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xc4;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdbe8);
        local_3e0 = local_388;
        FUN_140041c60(local_378,&DAT_1419df7b0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xc5;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd8f8);
        local_3e0 = local_388;
        FUN_140041c60(local_378,&DAT_1419df7b0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xc6;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdbb8);
        local_3e0 = local_388;
        FUN_140041c60(local_378,&DAT_1419df7b0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 199;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdba8);
        local_3e0 = local_388;
        FUN_140041c60(local_378,&DAT_1419df7b0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xcb;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a08ac8);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xcc;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a08d28);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xce;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_140042490(local_res8,DAT_141a08ac8);
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda28);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xcf;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd8e8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35c0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd0;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdbc8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3640);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd1;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda08);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3630);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd2;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd948);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35a0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd3;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd9a8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3650);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd4;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda98);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35e0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd5;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd8d8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35b0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd6;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdaf8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35f0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd7;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd988);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35d0);
        local_3d8 = local_378;
        uVar7 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar7,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_408 = 0xd8;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar7 = FUN_140042490(local_res8,DAT_141a08d28);
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda78);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xd9;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda88);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35c0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xda;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdae8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3640);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xdb;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda48);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3630);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xdc;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd9d8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35a0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xdd;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd908);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3650);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xde;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd938);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35e0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xdf;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdbf8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35b0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe0;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd8b8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35f0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe1;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdc18);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35d0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe3;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd918);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe4;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdb38);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35c0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe5;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda18);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3640);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe6;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd9b8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3630);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe7;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd8c8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35a0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe8;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd978);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3650);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xe9;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcda58);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35e0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xea;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd9e8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35b0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xeb;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdb98);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35f0);
        local_3d8 = local_378;
        uVar8 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar8,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_408 = 0xec;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar6);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdaa8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35d0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xed;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdad8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3610);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xee;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd928);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35c0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xef;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd8a8);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3640);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xf0;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd958);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3630);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xf1;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdb88);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35a0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xf2;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdb08);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e3650);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xf3;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd878);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35e0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xf4;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdb58);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35b0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xf5;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcd898);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35f0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xf6;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140041c60(local_398,uVar7);
        local_3e8 = local_398;
        FUN_140041c60(local_388,&DAT_141dcdb68);
        local_3e0 = local_388;
        FUN_1400441d0(local_378,&DAT_1419e35d0);
        local_3d8 = local_378;
        uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
        FUN_140e634e0(local_res8,local_res10,&local_428,3,uVar6,&local_3e8);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_408 = 0xfb;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        uVar6 = FUN_1400419a0(local_res8,DAT_141a08728);
        FUN_140e609c0(local_res8);
        uVar8 = CONCAT44(uVar4,DAT_1419ff3e8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar8,0);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_140041c60(uVar6,uVar7);
        FUN_140e60910(1);
        local_408 = 0xfd;
        local_2f0 = local_res8;
        local_2f8 = (longlong *)local_res10;
        lVar9 = FUN_140e4cb40(DAT_141a618e8 * 8);
        iVar3 = DAT_141a618e8;
        local_270 = lVar9;
        FUN_141290260(lVar9,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
        local_res20 = iVar3;
        local_408 = 0xff;
        if ((1 << ((byte)local_41c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_428);
        }
        local_428 = 0;
        local_420 = 0;
        local_41c = 5;
        FUN_140042490(local_res8,DAT_141a077c8);
        FUN_140042490(local_res8,DAT_141a08ac8);
        FUN_140042490(local_res8,DAT_141a08d28);
        FUN_1400419a0(local_res8,DAT_141a09ff8);
        uVar6 = CONCAT44(uVar4,DAT_141a0a4a8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_428,0,uVar6,0);
        FUN_140041c60(&local_290,uVar7);
        if (lVar9 != 0) {
          FUN_140e4cd60(lVar9);
        }
        local_408 = 0x107;
        FUN_140044220(&local_248,0);
        local_408 = 0x108;
        iVar3 = 0;
        if ((local_284 == 2) && (local_290 != 0)) {
          iVar3 = *(int *)(local_290 + 0x24);
        }
        while (uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20), 0 < iVar3) {
          iVar3 = iVar3 + -1;
          local_408 = 0x10a;
          uVar5 = thunk_FUN_140e4a740(&local_248);
          uVar6 = FUN_140044270(&local_290,uVar5);
          FUN_140041c60(&local_258,uVar6);
          local_408 = 0x10b;
          if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_308);
          }
          local_308 = 0;
          local_300 = 0;
          local_2fc = 5;
          local_3e8 = &local_258;
          uVar6 = CONCAT44(uVar4,DAT_141a0a4e8);
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_308,1,uVar6,&local_3e8);
          FUN_140041c60(&local_268,uVar7);
          local_408 = 0x10d;
          FUN_140044220(&local_228,0);
          iVar13 = 0;
          if ((local_25c == 2) && (local_268 != 0)) {
            iVar13 = *(int *)(local_268 + 0x24);
          }
          while (uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20), 0 < iVar13) {
            iVar13 = iVar13 + -1;
            local_408 = 0x110;
            if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_308);
            }
            local_308 = 0;
            local_300 = 0;
            local_2fc = 5;
            if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a0);
            }
            local_2a0 = 0;
            local_298 = 0;
            local_294 = 5;
            uVar6 = FUN_140042490(local_res8,DAT_141a08728);
            local_3e8 = &local_268;
            local_3e0 = &local_228;
            FUN_140041c60(local_378,uVar6);
            local_3d8 = local_378;
            uVar7 = CONCAT44(uVar4,DAT_141a03ca8);
            uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a0,2,uVar7,&local_3e8);
            uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
            FUN_140041c60(local_368,uVar6);
            local_3d0 = local_368;
            local_3c8 = &local_258;
            uVar6 = CONCAT44(uVar4,DAT_1419ff3d8);
            FUN_140e634e0(local_res8,local_res10,&local_308,3,uVar6,&local_3d8);
            local_408 = 0x111;
            FUN_140046040(&local_228);
          }
          local_408 = 0x114;
          FUN_140046040(&local_248);
        }
        cVar1 = FUN_140e643f0(local_80,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_80,&local_res8,&local_res10);
    local_408 = 0x11d;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_308 = 0;
    local_300 = 0;
    local_2fc = 5;
    gml_Script_scribble_anim_shake(local_res8,local_res10,&local_308,0,0);
    local_408 = 0x11e;
    if ((1 << ((byte)local_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_308 = 0;
    local_300 = 0;
    local_2fc = 5;
    gml_Script___scribble_font_add_from_bundle(local_res8,local_res10,&local_308,0,0);
    local_408 = 0x120;
    FUN_140041c60(local_res18,local_238);
    FUN_140045ef0(local_80);
    FUN_140041b30(&local_2a0);
    FUN_140041b30(&local_308);
    FUN_140041b30(&local_188);
    FUN_140041b30(&local_178);
    FUN_140041b30(&local_168);
    FUN_140041b30(&local_158);
    FUN_140041b30(&local_208);
    FUN_140041b30(&local_1f8);
    FUN_140041b30(&local_2c0);
    FUN_140041b30(&local_2b0);
    FUN_140041b30(&local_400);
    FUN_140041b30(&local_428);
    FUN_140041b30(&local_228);
    FUN_140041b30(&local_268);
    FUN_140041b30(&local_258);
    FUN_140041b30(&local_248);
    FUN_140041b30(&local_290);
    FUN_140041b30(&local_2d8);
    FUN_140041b30(&local_2e8);
    FUN_140041b30(&local_280);
    FUN_140041b30(&local_218);
    _eh_vector_destructor_iterator_(local_398,0x10,9,FUN_140041b30);
    FUN_140041f30(local_1e8);
    FUN_140041970(&local_418);
  }
  else {
    local_408 = 0x11;
    uVar6 = (**(code **)(*DAT_141dddad8 + 8))(DAT_141dddad8,DAT_1419fcb48);
    FUN_140041c60(local_res18,uVar6);
    FUN_140041b30(&local_2a0);
    FUN_140041b30(&local_308);
    FUN_140041b30(&local_188);
    FUN_140041b30(&local_178);
    FUN_140041b30(&local_168);
    FUN_140041b30(&local_158);
    FUN_140041b30(&local_208);
    FUN_140041b30(&local_1f8);
    FUN_140041b30(&local_2c0);
    FUN_140041b30(&local_2b0);
    FUN_140041b30(&local_400);
    FUN_140041b30(&local_428);
    FUN_140041b30(&local_228);
    FUN_140041b30(&local_268);
    FUN_140041b30(&local_258);
    FUN_140041b30(&local_248);
    FUN_140041b30(&local_290);
    FUN_140041b30(&local_2d8);
    FUN_140041b30(&local_2e8);
    FUN_140041b30(&local_280);
    FUN_140041b30(&local_218);
    _eh_vector_destructor_iterator_(local_398,0x10,9,FUN_140041b30);
    FUN_140041f30(local_1e8);
    DAT_141dc7a50 = local_418;
  }
  return local_res18;
}

