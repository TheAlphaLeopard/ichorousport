// gml_Script_anon_2889____struct___136___new_lighting_system_lighting_system @ 0x1403a34e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2889____struct___136___new_lighting_system_lighting_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  code *pcVar14;
  undefined4 uVar15;
  double **in_stack_fffffffffffffce0;
  undefined4 uVar16;
  double local_2f8;
  uint uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  double local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  double local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  int local_298;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  double local_248;
  undefined4 local_23c;
  double local_238;
  undefined4 local_22c;
  double local_228;
  undefined4 local_21c;
  double local_218;
  undefined4 local_20c;
  double local_208;
  undefined4 local_1fc;
  double local_1f8;
  undefined4 local_1ec;
  undefined1 local_1e8 [12];
  undefined4 local_1dc;
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  double local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 local_17c;
  double local_178;
  undefined4 local_16c;
  double local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  double *local_148;
  double *local_138;
  double *local_130;
  double *local_128;
  double *local_120;
  double *local_118;
  double *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  double *local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  double *local_c0;
  
  local_260 = "gml_Script_anon@1228@___struct___136@__new_lighting_system@lighting_system";
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  local_258 = 0x29;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_248,0x10,0x10,FUN_1400424d0,FUN_140041b30);
  uStack_2ec = 0xffffff;
  local_2f8 = 0.0;
  local_2bc = 0;
  local_2c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2cc = 0;
  local_2d8 = 0.0;
  local_258 = 0x2c;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5048);
  uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
  iVar1 = 0;
  if ((*(int *)((longlong)pdVar4 + 0xc) == 2) && (*pdVar4 != 0.0)) {
    iVar1 = *(int *)((longlong)*pdVar4 + 0x24);
  }
  do {
    local_148 = pdVar4;
    if (iVar1 < 1) {
      local_258 = 0x34;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      if (pdVar4 != &local_248) {
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        FUN_140041b80(&local_248,&local_2e8);
      }
      local_2e8 = _DAT_141dc6520;
      uStack_2e4 = uRam0000000141dc6524;
      uStack_2e0 = uRam0000000141dc6528;
      uStack_2dc = uRam0000000141dc652c;
      local_138 = &local_248;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_2e8);
      local_130 = &local_238;
      FUN_140e634e0(param_1,param_2,&local_2c8,2,CONCAT44(uVar15,DAT_1419fee68),&local_138);
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      _eh_vector_destructor_iterator_(&local_248,0x10,0x10,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_268;
      return param_3;
    }
    uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffce0 >> 0x20);
    local_298 = iVar1 + -1;
    local_258 = 0x2d;
    pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5048);
    iVar1 = FUN_140e4a740(&local_2d8);
    if (((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 2) && (dVar6 = *pdVar4, dVar6 != 0.0)) {
      if ((iVar1 < 0) || (*(int *)((longlong)dVar6 + 0x24) <= iVar1)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                      *(undefined4 *)((longlong)dVar6 + 0x24));
        pdVar4 = (double *)0x0;
      }
      else {
        pdVar4 = (double *)((longlong)iVar1 * 0x10 + *(longlong *)((longlong)dVar6 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (pdVar4 != &local_2f8) {
      local_2e8 = *(undefined4 *)pdVar4;
      uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
      uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
      uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      FUN_140041b80(&local_2f8,&local_2e8);
    }
    if (((uStack_2ec == 2) && (local_2f8 != 0.0)) && (9 < *(int *)((longlong)local_2f8 + 0x24))) {
      local_258 = 0x2f;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        }
        else {
          pdVar4 = *(double **)((longlong)local_2f8 + 8);
        }
        if (pdVar4 != &local_248) goto LAB_1403a3784;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3784:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        FUN_140041b80(&local_248,&local_2e8);
      }
      local_138 = &local_248;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x10);
        }
        if (pdVar4 != &local_238) goto LAB_1403a381a;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a381a:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_2e8);
      }
      local_130 = &local_238;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 10) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",9);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x90);
        }
        if (pdVar4 != &local_228) goto LAB_1403a38b6;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a38b6:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_2e8);
      }
      local_128 = &local_228;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 0xb) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",10);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0xa0);
        }
        if (pdVar4 != &local_218) goto LAB_1403a3952;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3952:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_2e8);
      }
      local_120 = &local_218;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 0xc) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0xb);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0xb0);
        }
        if (pdVar4 != &local_208) goto LAB_1403a39ee;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a39ee:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_2e8);
      }
      local_118 = &local_208;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 0xd) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0xc);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0xc0);
        }
        if (pdVar4 != &local_1f8) goto LAB_1403a3a8a;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3a8a:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_2e8);
      }
      local_110 = &local_1f8;
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*param_5;
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 3) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x20);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      uStack_27c = *(undefined4 *)((longlong)pdVar4 + 0xc);
      uStack_280 = *(undefined4 *)(pdVar4 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_288 = *pdVar4;
      }
      else {
        FUN_1400419b0(&local_288,pdVar4);
      }
      FUN_1400460e0(&local_288,puVar5);
      local_2e8 = (undefined4)local_288;
      uStack_2e4 = local_288._4_4_;
      uStack_2e0 = uStack_280;
      uStack_2dc = uStack_27c;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2e8);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_108 = local_1e8;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 4) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x30);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      uStack_26c = *(undefined4 *)((longlong)pdVar4 + 0xc);
      uStack_270 = *(undefined4 *)(pdVar4 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_278 = *pdVar4;
      }
      else {
        FUN_1400419b0(&local_278,pdVar4);
      }
      FUN_1400460e0(&local_278,puVar5);
      local_2e8 = (undefined4)local_278;
      uStack_2e4 = local_278._4_4_;
      uStack_2e0 = uStack_270;
      uStack_2dc = uStack_26c;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2e8);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_100 = local_1d8;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 5) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",4);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x40);
        }
        if (pdVar4 != &local_1c8) goto LAB_1403a3d2c;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3d2c:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_2e8);
      }
      local_f8 = &local_1c8;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 6) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",5);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x50);
        }
        if (pdVar4 != &local_1b8) goto LAB_1403a3dd3;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3dd3:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_2e8);
      }
      local_f0 = &local_1b8;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 7) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",6);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x60);
        }
        if (pdVar4 != &local_1a8) goto LAB_1403a3e7a;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3e7a:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_2e8);
      }
      local_e8 = &local_1a8;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 8) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",7);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x70);
        }
        if (pdVar4 != &local_198) goto LAB_1403a3f21;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3f21:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_2e8);
      }
      local_e0 = &local_198;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 8) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",7);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x70);
        }
        if (pdVar4 != &local_188) goto LAB_1403a3fc8;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a3fc8:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_2e8);
      }
      local_d8 = &local_188;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 8) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",7);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x70);
        }
        if (pdVar4 != &local_178) goto LAB_1403a406f;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a406f:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_2e8);
      }
      local_d0 = &local_178;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 8) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",7);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x70);
        }
        if (pdVar4 != &local_168) goto LAB_1403a4116;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a4116:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_2e8);
      }
      local_c8 = &local_168;
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 9) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",8);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x80);
        }
        if (pdVar4 != &local_158) goto LAB_1403a41b8;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
LAB_1403a41b8:
        local_2e8 = *(undefined4 *)pdVar4;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar4 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_2e8);
      }
      local_c0 = &local_158;
      in_stack_fffffffffffffce0 = &local_138;
      pcVar14 = (code *)CONCAT44(uVar15,DAT_1419f5058);
      FUN_140e634e0(param_1,param_2,&local_2c8,0x10,pcVar14,in_stack_fffffffffffffce0);
    }
    else {
      local_258 = 0x31;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 4) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x30);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      local_29c = *(uint *)((longlong)pdVar4 + 0xc);
      local_2a0 = *(undefined4 *)(pdVar4 + 1);
      if ((1 << ((byte)*(uint *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_2a8 = *pdVar4;
      }
      else {
        FUN_1400419b0(&local_2a8,pdVar4);
      }
      FUN_1400460e0(&local_2a8,puVar5);
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*param_5;
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 3) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x20);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      local_2ac = *(uint *)((longlong)pdVar4 + 0xc);
      local_2b0 = *(undefined4 *)(pdVar4 + 1);
      if ((1 << ((byte)*(uint *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_2b8 = *pdVar4;
      }
      else {
        FUN_1400419b0(&local_2b8,pdVar4);
      }
      FUN_1400460e0(&local_2b8,puVar5);
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 9) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",8);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x80);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar6 = *pdVar4;
      }
      else {
        dVar6 = (double)FUN_140e4b060(pdVar4);
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 8) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",7);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x70);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      uVar2 = FUN_140e4a8b0(pdVar4);
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 7) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",6);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x60);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar7 = *pdVar4;
      }
      else {
        dVar7 = (double)FUN_140e4b060(pdVar4);
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 6) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",5);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x50);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar8 = *pdVar4;
      }
      else {
        dVar8 = (double)FUN_140e4b060(pdVar4);
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 5) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",4);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x40);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar9 = *pdVar4;
      }
      else {
        dVar9 = (double)FUN_140e4b060(pdVar4);
      }
      dVar10 = local_2a8;
      if ((local_29c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2a8);
      }
      dVar11 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar11 = (double)FUN_140e4b060(&local_2b8);
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        }
        else {
          pdVar4 = (double *)(*(longlong *)((longlong)local_2f8 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar4;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar4);
      }
      pdVar4 = (double *)0x0;
      if (((uStack_2ec & 0xffffff) == 2) && (local_2f8 != 0.0)) {
        if (*(int *)((longlong)local_2f8 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        }
        else {
          pdVar4 = *(double **)((longlong)local_2f8 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_2f8;
      }
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar4;
      }
      else {
        dVar13 = (double)FUN_140e4b060(pdVar4);
      }
      in_stack_fffffffffffffce0 = (double **)CONCAT44(uVar16,(float)dVar9);
      pcVar14 = (code *)CONCAT44(uVar15,(float)dVar10);
      FUN_140ec5dd0(param_1,(longlong)dVar13,(float)dVar12,(float)dVar11,pcVar14,
                    in_stack_fffffffffffffce0,(float)dVar8,(float)dVar7,uVar2,(float)dVar6);
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
    }
    local_258 = 0x32;
    uVar3 = local_2cc & 0xffffff;
    if (uVar3 == 0) {
LAB_1403a47c4:
      local_2d8 = local_2d8 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_2d8 = (double)FUN_140e4b060(&local_2d8);
        local_2cc = 0;
        goto LAB_1403a47c4;
      }
      if (uVar3 == 7) {
        local_2d8 = (double)CONCAT44(local_2d8._4_4_,local_2d8._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_2d8 = (double)((longlong)local_2d8 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_2cc = 0;
          goto LAB_1403a47c4;
        }
        FUN_140042910(&DAT_14172c3d8,&local_2d8,&local_2d8);
      }
    }
    uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    pdVar4 = local_148;
    iVar1 = local_298;
  } while( true );
}

